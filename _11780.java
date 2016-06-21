import java.util.*;

public class _11780 
{
	static final int inf = 987654321;
	static int n,m;
	static int[][] grp;
	
	public static void solve()
	{
		int[][] d = new int[n+1][n+1];
		List<Integer>[][] list = (List<Integer>[][]) new ArrayList[n+1][n+1];
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				d[i][j] = grp[i][j];
				list[i][j] = new ArrayList<Integer>();
				if(grp[i][j]!=inf || i!=j)
				{
					list[i][j].add(i);
					list[i][j].add(j);
				}
			}
		}
		
		for(int k=1; k<=n; k++)
			for(int i=1; i<=n; i++)
				for(int j=1; j<=n; j++)
					if(d[i][k]!=inf && d[k][j]!=inf)
					{
						if(d[i][j] > d[i][k] + d[k][j])
						{
							d[i][j] = d[i][k] + d[k][j];
							
							//if(i!=k && j!=k)
								list[i][j].clear();
								list[i][j].addAll(list[i][k]);
								list[i][j].remove(list[i][j].size()-1);
								list[i][j].addAll(list[k][j]);						
						}
					}
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				System.out.print(d[i][j]);
				System.out.print(' ');				
			}
			System.out.println();
		}
		
		
		for(int i=1; i<=n; i++)
		{
			//System.out.print("n: "+i+" ");
			for(int j=1; j<=n; j++)
			{
				if(i==j)
				{
					System.out.println(0);
					continue;
				}
				
				System.out.print(list[i][j].size());
				
				for(int n : list[i][j])
				{
					System.out.print(' ');
					System.out.print(n);
				}
				System.out.println();
			}
		}
		
		
	}
	
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
				if(i==j)
					grp[i][j] = 0;
				else
					grp[i][j] = inf;
				
			}
		}
		for(int i=0; i<m; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u][v] = Math.min(c, grp[u][v]);
		}
		solve();
	}
}
