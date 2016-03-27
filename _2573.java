package BJ;
import java.util.*;

public class _2573 
{
	static int R,C;
	static int[][]F;
	static int[][] mask;
	static int[] mp_x = {-1, 1, 0, 0};
	static int[] mp_y = {0, 0, -1, 1};
	static boolean[][] visited;
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		R = sc.nextInt();
		C = sc.nextInt();
		F = new int[R][C];
		for(int y=0; y<R; y++)
			for(int x=0; x<C; x++)
				F[y][x] = sc.nextInt();
	
		
		solve();		
	}	
	
	public static void solve()
	{
		int answer = 0;
		boolean allZero;
		while(true)
		{
			visited = new boolean[R][C];
			allZero = true;
			int mess=0;
			for(int y=0; y<R; y++)
				for(int x=0; x<C; x++)
					if(F[y][x]!=0)
					{
						allZero = false;
						if(!visited[y][x])
						{
							DFS(y, x);
							mess++;
							//System.out.println("M:" + mess);
						}
					}
			if(mess>=2)
				break;
			if(allZero)
				break;			
			afterYear();
			answer++;
		}
		if(allZero)
			System.out.println("0");
		else
			System.out.println(answer);
	}
	
	public static void afterYear()
	{
		mask = new int[R][C];
		for(int y=0; y<R; y++)
			for(int x=0; x<C; x++)
				if(F[y][x]!=0)
				{
					for(int p=0; p<4; p++)
					{
						int ty = y+mp_y[p];
						int tx = x+mp_x[p];
						if(ty>=0 && ty<R && tx>=0 && tx<C && F[ty][tx]==0 && F[y][x]>0)
							mask[y][x]--;
					}
				}		
		for(int y=0; y<R; y++)
			for(int x=0; x<C; x++)
			{
				if(F[y][x] + mask[y][x]>0)
					F[y][x] += mask[y][x];
				else
					F[y][x] = 0;
			}
		
	}
	
	public static void DFS(int y, int x)
	{
		for(int p =0; p<4; p++)
		{
			int ny = y+mp_y[p];
			int nx = x+mp_x[p];
			if(ny>=0 && ny<R && nx>=0 && nx<C && F[ny][nx]!=0 && !visited[ny][nx])
			{	
				visited[ny][nx] = true;
				DFS(ny, nx);
			}
		}
	}
	
	
}
