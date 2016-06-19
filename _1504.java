import java.util.*;

class Eg_3
{
	public int from, to, cost;
	Eg_3(int u, int v, int c)
	{
		this.from = u;
		this.to = v;
		this.cost = c;
	}
}
class Node_3 implements Comparable<Node_3> 
{
	public int node, cost;
	Node_3(int n, int c)
	{
		node = n;
		cost = c;
	}
	public int compareTo(Node_3 a)
	{
		return this.cost < a.cost ? -1 :  1;
	}
}	


public class _1504
{	
	static int n,e;
	static List<Eg_3>[] grp;
	static final int inf = 100000000;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		e = sc.nextInt();
		grp = (ArrayList<Eg_3>[]) new ArrayList[n+1];
		for(int i=1; i<=n; i++)
			grp[i] = new ArrayList<Eg_3>();
			
		for(int i=0; i<e; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u].add(new Eg_3(u, v, c));
			grp[v].add(new Eg_3(v, u, c));
		}		
		int a = sc.nextInt();
		int b = sc.nextInt();
		solve(a,b);
	}
	
	public static void solve(int a, int b)
	{
		int[] cost1 = dstra(1);
		int[] costa = dstra(a);
		int[] costb = dstra(b);
		//1-a-b-N
		int d1 = cost1[a] + costa[b] + costb[n];		
		//1-b-a-N
		int d2 = cost1[b] + costb[a] + costa[n];
		
		int min = d1>d2?d2:d1;
		
		if(min>=inf)
			System.out.println(-1);
		else
			System.out.println(min);
	}
	
	public static int[] dstra(int start)
	{
		boolean[] visit = new boolean[n+1];
		int[] cost = new int[n+1];
		for(int i=1; i<=n; i++)
			cost[i] = inf;				
		cost[start] = 0;
		visit[start] = true;
		PriorityQueue<Node_3> PQ = new PriorityQueue<Node_3> ();
		PQ.add(new Node_3(start, 0));		
		while(!PQ.isEmpty())
		{
			Node_3 min = null;
			while(!PQ.isEmpty())
			{
				min = PQ.poll();
				if(cost[min.node] >= min.cost)
					break;
			}
			int minNode = min.node;
			visit[minNode] = true;
			for(Eg_3 e : grp[minNode])
			{
				int newCost = cost[e.from] + e.cost;
				if(cost[e.to] > newCost)
				{
					cost[e.to] = newCost;
					PQ.add(new Node_3(e.to, newCost));
				}
			}
		}
		
		return cost;
	}
}
