package BJ;
import java.util.Scanner;
import java.math.*;
//https://www.acmicpc.net/problem/10819

public class Max_Diff
{
	static Scanner  sc = new Scanner(System.in); 
	static int N;
	static int[] arr;
	static int[] for_solve;
	static boolean[] check;
	
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub

		 N = sc.nextInt();
		arr = new int[N];
		for_solve = new int[N];
		check = new boolean[N];
		
		for(int i=0; i<N; i++)
			arr[i] = sc.nextInt();
		
		System.out.println(solve(0));
	}
	
	public static int solve(int index)
	{
		if(index==N)
		{
			int ans=0;
			
			for(int i=0; i<=N-2; i++)
				ans+=Math.abs(for_solve[i] - for_solve[i+1]);
			
			return ans;
		}
		
		int ans=0;
		for(int i=0; i<N; i++)
		{
			if(!check[i])
			{
				for_solve[index] = arr[i];
				check[i] = true;
				ans = Math.max(ans, solve(index+1));
				check[i] = false;
			}
		}
		
		return ans;
	}

}
