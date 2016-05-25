package Study;

import java.util.*;
//https://www.acmicpc.net/problem/2910
public class Frequency_Sort
{
	static int N,C;
	static int[] arr;
	
	public static class T
	{
		public int v;
		public int c;
		
		public T(int v, int c)
		{
			this.v = v;
			this.c = c;
		}

	};
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		C = sc.nextInt();
		
		arr = new int[N+1];
		
		for(int i=0; i<N; i++)
			arr[i] = sc.nextInt();
		
		solve();
		
	}

	public static void solve()
	{
		ArrayList list = new ArrayList<T>();
		
	
		for(int i=0; i<N; i++) // 값,횟수 를 값으로 갖는 객체 리스트 작성, 가장 먼저 등장한 것이 앞으로 오도록 함
		{
			boolean flg = false;
			
			for(int j=0; j<list.size(); j++)
			{
				T tmp = (T)list.get(j);
				
				if(tmp.v == arr[i])
				{
					list.set(j, new T(tmp.v, tmp.c+1));
					
					flg=true;
				}
			}
			
			if(!flg) 
				list.add( new T(arr[i], 1) );
		}
		
		
		while(list.size()>0)
		{
			int maxCnt = -1;
			int maxCntIdx = -1;
			
			for(int i=0; i<list.size(); i++)
			{
				T tmp = (T)list.get(i);
				
				if(maxCnt < tmp.c)
				{
					maxCnt = tmp.c;
					maxCntIdx = i;
				}
			}
			
			T tmp = (T)list.get(maxCntIdx);
					
			for(int t=0; t<tmp.c; t++)
				System.out.print(tmp.v+" ");
			
			list.remove(maxCntIdx);
		}
		
		System.out.println("");
	}
}
