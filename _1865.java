import java.util.*;

class Edg
{
	public int from, to, cost;
	Edg(int u, int v, int c)
	{
		this.from = u;
		this.to= v;
		this.cost = c;
	}
}

public class _1865 
{
	static int n,m,w,tc;
	static List<Edg> grp; 
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		tc=sc.nextInt();
		while(tc-- >0)
		{
			n = sc.nextInt();
			m = sc.nextInt();
			w = sc.nextInt();
			
			grp = new ArrayList<Edg>();
		
			for(int i=0; i<m; i++)
			{
				int u = sc.nextInt();
				int v = sc.nextInt();
				int c = sc.nextInt();
				grp.add(new Edg(u, v, c));
				grp.add(new Edg(v, u, c));
			}
			for(int i=0; i<w; i++)
			{
				int from = sc.nextInt();
				int to = sc.nextInt();
				int c = sc.nextInt();
				grp.add(new Edg(from, to, -c));
			}
			
			solve();
		}
	}
	
	public static void solve()
	{
		boolean negcy=false;
		int inf = 100000000;
		int[] cost = new int[n+1];
		for(int i=1; i<=n; i++)
			cost[i] = inf;
		cost[1] = 0;
		
		for(int i=1; i<=n; i++)
		{
			for(Edg e : grp)
			{
				if(cost[e.from]!=inf && cost[e.to] > cost[e.from] + e.cost)
				{
					cost[e.to] = cost[e.from] + e.cost;
					if(i==n)
						negcy=true;
				}
			}
		}
		if(negcy)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}
