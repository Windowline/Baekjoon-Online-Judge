package BJ;
import java.util.*;
import java.math.*;
//https://www.acmicpc.net/problem/1463
public class _1463 
{
	static int[] cache;
	
	public static int minCnt(int N)
	{   
		if(N==1) return 0;
		else if(N<1) return -987654321;
			
		if(cache[N]!=-1)
			return cache[N];
		int min = 987654321;
		if(N%2==0)
			min = Math.min(min, minCnt(N/2));
		if(N%3==0)
			min = Math.min(min, minCnt(N/3));		
		return cache[N] = Math.min(min, minCnt(N-1)) + 1; 
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		cache = new int[N+1];
		for(int i=0; i<=N; i++)
			cache[i] = -1;
		
		System.out.println(minCnt(N));
	}

}
