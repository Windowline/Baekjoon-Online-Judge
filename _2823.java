package BJ;
import java.util.*;
public class _2823 
{
	static int R,C;
	static char [][]F;
	static boolean[][] visited;
	static int[] mv_y = {-1, 1, 0, 0};
	static int[] mv_x = {0, 0, -1, 1};
	static int answer = 0;
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		R = sc.nextInt();
		C = sc.nextInt();
		String line=null;
		F = new char [R][C];
		int toV=0;
		
		sc.nextLine();
		for(int y=0; y<R; y++)
		{
			line = sc.nextLine();
			for(int c=0; c<line.length(); c++)
			{
				char[] t = line.toCharArray();
				F[y][c] = t[c];	
				if(t[c]=='.')
					toV++;
			}
		}
		
		for(int y=0; y<R; y++)
		{
			for(int x=0; x<C; x++)
			{
				if(F[y][x]=='.')
				{
					visited = new boolean[R][C];
					visited[y][x] = true;
					dfs(y, x);
					break;
				}
			}
		}
		System.out.println(answer);
	}
	
	public static void dfs(int y, int x)
	{
		int cnt=0;
		int[] nys = new int[4];
		int[] nxs = new int[4];
		for(int p=0; p<4; p++)
		{	
			int ny = y + mv_y[p];
			int nx = x + mv_x[p];
			//System.out.println("B "+ny +" , "+nx);
			if(ny>=0 && ny<R && nx>=0 && nx<C && F[ny][nx]!='X')
			{
			//	System.out.println("C "+ny +" , "+nx);
				nys[cnt] = ny;
				nxs[cnt] = nx;
				cnt++;
			}
		}		
		if(cnt<=1)
		{
			//System.out.println("aaa "+y+" , "+x +" , "+cnt  );
			answer = 1;
			return;
		}
		else
		{
			for(int i=0; i<cnt; i++)
			{
				int ny = nys[i];
				int nx = nxs[i];
				if(!visited[ny][nx])
				{
					visited[ny][nx] = true;
					dfs(ny, nx);
				}
			}
		}
	}
	

}
