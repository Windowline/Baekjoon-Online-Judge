package BJ;
import java.util.*;
import java.math.*;
//https://www.acmicpc.net/problem/11048

public class _11048 
{
	static int N,M;
	static int[][] grid;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		grid = new int[N+1][M+1];
		for(int i=1; i<=N; i++)
			for(int j=1; j<=M; j++)
				grid[i][j] = sc.nextInt();
		
		int[][] answer = new int[N+1][M+1];
		answer[1][1] = grid[1][1];
		for(int x=2; x<=M; x++)
			answer[1][x] = answer[1][x-1] + grid[1][x];
		for(int y=2; y<=N; y++)
			answer[y][1] += answer[y-1][1] + grid[y][1];
		for(int y=2; y<=N; y++)
			for(int x=2; x<=M; x++)
				answer[y][x] = Math.max(answer[y-1][x-1], Math.max(answer[y-1][x], answer[y][x-1])) + grid[y][x];
		
		System.out.println(answer[N][M]);
	}

}
