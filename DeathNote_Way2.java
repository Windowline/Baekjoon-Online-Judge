package Study;

import java.util.Scanner;
import java.math.*;
//https://www.acmicpc.net/problem/2281
public class DeathNote_Way2 
{
	static int N,M;
	static int[] name;
	static int[] cache;
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt(); //사람수
		M = sc.nextInt(); // 노트 폭
		
		name = new int[N];
		cache = new int[N];
		
		for(int i=0; i<N; i++)
		{	
			name[i] = sc.nextInt();
			//cache[i] = -1;
		}
		
		System.out.println(solve2());
	
	}
	
	//전체 입력에 대한 전역 최소값 = Min( 첫번째 줄의 여백의 값 + 첫번째줄의 마지막 다음 사람 ~ 마지막 사람 고려한 전역 최소값=A )
	//일반화 --> i는 첫번째 라인 첫 요소일 때, i~마지막요소 범위의 전역 최소값 := solve(i) Min( 첫째줄의 여백 값 + 첫째줄 다음사람
	// solve(i) = Min(첫째줄의 여백 값 + solve(j+1)) [ j는 첫째줄의 마지막 요소, j+1은 그 다음줄의 첫 요소] 
	public static int solve(int number) 
	{
		if(cache[number]!=-1) return cache[number];
		
		int subAns = 90000000;
		int len = 0;
		for(int next=number; next<N && len+name[next]<=M; next++)
		{
			if(next==N-1) return 0;
						
			len += name[next];
			subAns = Math.min(subAns, (M-len)*(M-len)+solve(next+1));
			len++;
		}
		
		return cache[number] = subAns;
	}
	
	public static int solve2()
	{	
		cache[N-1] = 0;
		
		for(int subInput=N-2; subInput>=0; subInput--)
		{
			int len = 0;
			int min = 90000000;
			
			for(int next = subInput; next<=N-2 && len+name[next]<=M; next++)
			{
				len+= name[next];
				int s = cache[next+1] + (M-len)*(M-len);
				min = min<s ? min:s;
				
				if(len==M)break;
				
				else
					len++;
			}	
			
			if(len<M) cache[subInput] = min;
			
			else cache[subInput] = 0;
		}
		
		return cache[0];
	}
	
}
