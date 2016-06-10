import java.util.*;
//https://www.acmicpc.net/problem/9663

public class _9663 
{
	static int N;
	static int[] col;
	static int answer = 0;
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		col = new int[N+1];
		
		NQ(1);
		System.out.println(answer);
	}
	
	static void NQ(int y)
	{
		if(y>N)
		{
			answer++;
			return;
		}
		
		int ans=0;
		for(int x=1; x<=N; x++)
		{
			if(check(y, x))
			{
				col[y] = x;
				NQ(y+1);
				col[y] = 0;
			}
		}
	}
	
	static boolean check(int y, int x)
	{
		for(int i=1; i<y; i++)
		{
			int tmp_x = col[i]; // Y행에서 선택한 열
			if(tmp_x==x)
				return false;
			
			int colDist = Math.abs(x-tmp_x);
			int rowDist = y-i;
			
			if(colDist==rowDist)
				return false;
		}
		return true;
	}
}
