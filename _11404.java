import java.util.*;

public class _11404 
{
	static final int inf = 987654321;
	static int n,m;
	static int[][] grp;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		grp = new int[n+1][n+1];
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(i!=j)
					grp[i][j] = inf;
				else
					grp[i][j] = 0;
			}
		}
		for(int i=0; i<m; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u][v] = Math.min(grp[u][v], c);
		}
		
		int[][] d = new int[n+1][n+1];
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				d[i][j] = grp[i][j];
		
		for(int k=1; k<=n; k++)
			for(int i=1; i<=n; i++)
				for(int j=1; j<=n; j++)
					if(d[i][k]!=inf && d[k][j]!=inf)
						d[i][j] = Math.min(d[i][j], d[i][k]+d[k][j]);
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(d[i][j]>=inf)
					System.out.println(0);
				else
					System.out.print(d[i][j]);
				
				System.out.print(' ');
			}
			System.out.println();
		}
	}

}
