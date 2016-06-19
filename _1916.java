import java.util.*;

class Edge_1
{
	public int from, to, cost;
	Edge_1(int u, int v, int c)
	{
		this.from = u;
		this.to= v;
		this.cost = c;
	}
}

class Node_1 implements Comparable<Node_1>
{
	public int node, cost;
	public Node_1(int node, int cost)
	{
		this.node = node;
		this.cost = cost;
	}
	public int compareTo(Node_1 a)
	{
		return this.cost < a.cost ? -1 : 1;
	}
}

public class _1916 
{
	static final int inf=987654321;
	static int n,m;
	static List<Edge_1>[] grp;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();		
		grp = (ArrayList<Edge_1>[]) new ArrayList[n+1];
		for(int i=1; i<=n; i++)
			grp[i] = new ArrayList<Edge_1>();
		
		for(int i=0; i<m; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u].add(new Edge_1(u, v, c));
		}
		int start = sc.nextInt();
		int end = sc.nextInt();
		dstra(start, end);
	}
	
	public static void dstra(int start, int end)
	{
		final int inf = 987654321;
		boolean[] visit = new boolean[n+1];
		int[] cost = new int[n+1];
		for(int i=1; i<=n; i++)
			cost[i] = inf;				
		cost[start] = 0;
		visit[start] = true;
		PriorityQueue<Node_1> PQ = new PriorityQueue<Node_1> ();
		PQ.add(new Node_1(start, 0));		
		while(!PQ.isEmpty())
		{
			Node_1 min = null;
			while(!PQ.isEmpty())
			{
				min = PQ.poll();
				if(cost[min.node] >= min.cost)
					break;
			}
			int minNode = min.node;
			visit[minNode] = true;
			for(Edge_1 e : grp[minNode])
			{
				int newCost = cost[e.from] + e.cost;
				if(cost[e.to] > newCost)
				{
					cost[e.to] = newCost;
					PQ.add(new Node_1(e.to, newCost));
				}
			}
		}
		
		System.out.println(cost[end]);
	}
}
