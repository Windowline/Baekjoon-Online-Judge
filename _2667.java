package BJ;
import java.util.*;
//https://www.acmicpc.net/problem/2667

public class _2667
{
	static  int N;
	static int[][] filed;
	static boolean[][] visited;
	static int[] movPattern_x = {-1, 0, 0, 1};
	static int[] movPattern_y = {0, -1, 1, 0};
	
	static int cnt=0;
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		filed = new int[N+1][N+1];
		visited = new boolean[N+1][N+1];
		
		for(int i=1; i<=N; i++)
		{
			String tmp = sc.next();
			for(int c=0; c<tmp.length(); c++)
				filed[i][c+1] = tmp.charAt(c)-'0';
		}

		solve();
	}
	
	public static void solve()
	{
		List<Integer> answerList = new ArrayList();
		
		for(int y=1; y<=N; y++)
			for(int x=1; x<=N; x++)
				if(!visited[y][x])
				{
					cnt=0;
					visited[y][x] = true;
					DFS(y, x);
					
					if(cnt>0)
					answerList.add(cnt);
				}
			
		Collections.sort(answerList); //List정렬
		System.out.println(answerList.size());
		for(int answer : answerList)
			System.out.println(answer);
		
	}
	
	public static void DFS(int y, int x)
	{
		if(filed[y][x]==0)
			return;
		cnt++;	//전역	
		for(int p=0; p<4; p++)
		{
			int next_y = y + movPattern_y[p];
			int next_x = x + movPattern_x[p];
			if(next_x>=1 && next_x<=N && next_y>=1 && next_y<=N &&!visited[next_y][next_x])
			{
				visited[next_y][next_x] = true;
				DFS(next_y, next_x);
			}
		}
	}
}
