import java.util.*;
class Eg
{
	public int u, v, c;
	public Eg(int u, int v, int c)
	{
		this.u=u;
		this.v=v;
		this.c=c;
	}
}
public class _11657 
{
	static int N, M;
	static List<Eg> grp;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		grp = new ArrayList<Eg>(); 
		for(int i=0; i<M; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp.add(new Eg(u,v,c));
		}
		
		ford(1);
	}
	
	static void ford(int s)
	{
		int inf = 987654321;
		int[] cost = new int[N+1];
		for(int i=1; i<=N; i++)
			cost[i] = inf;
		
		cost[1] = 0;
		boolean neg_cycle = false;
		
		for(int d=1; d<=N; d++)
		{
			for(Eg e : grp)
			{
				if(cost[e.u]!=inf && cost[e.v] > cost[e.u] + e.c )
				{
					cost[e.v] = cost[e.u] + e.c;							
					if(d==N)
						neg_cycle = true;
				}
			}
		}
		
		if(neg_cycle)
			System.out.println(-1);
		
		else
		{
			for(int i=2; i<=N; i++)
				if(cost[i]==inf)
					System.out.println(-1);
				else
					System.out.println(cost[i]);
		}
	}
	
}
