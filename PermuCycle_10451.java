package BJ;
import java.util.*;
//https://www.acmicpc.net/problem/10451
public class PermuCycle_10451 
{
	static Scanner sc = new Scanner(System.in);
	static int N;
	static int[] nums;
	public static void main(String[] args) 
	{
		int TC = sc.nextInt();
		for(int i=0; i<TC; i++)
		{
			N = sc.nextInt();
			nums = new int[N+1];
			for(int n=1; n<=N; n++)
				nums[n] = sc.nextInt();
			
			solve();
		}	
		
	}
	
	public static void solve()
	{
		boolean[] visited = new boolean[N+1];
		int answer=0;
		for(int i=1; i<=N; i++)
		{
			if(visited[i]) continue;
			
			int start = i;
			visited[start] = true;
			int next=start;
			while(true)
			{
				visited[next] = true;
				next = nums[next];	
				if(next==start)
					break;
			}
			answer++;
		}
		System.out.println(answer);
	}
}
