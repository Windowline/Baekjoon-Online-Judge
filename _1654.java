package BJ;
//https://www.acmicpc.net/problem/1654

import java.util.*;
public class _1654 
{
	static int N,K;
	static int[] lines;
		
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		K = sc.nextInt();
		N = sc.nextInt();
		lines = new int[K];
		for(int i=0; i<K; i++)
			lines[i] = sc.nextInt();
		
		
		int max = 0; 
		for(int i=0; i<K; i++)
			max = lines[i] > max ? lines[i] : max;
			
		int low = 0;
		int high = max;
		int mid = 0;
		for(int i=0; i<100; i++) //binary search
		{	
			mid= (high+low)/2;	
			int n=0;
			for(int t=0; t<K; t++)
				n+=(lines[t]/mid);
			
			if(n < N)
				high=mid;
			else if(n >= N)
				low = mid;			
		}
		System.out.println(mid);
	}

}
