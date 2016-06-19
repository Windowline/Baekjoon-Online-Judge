import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

class Edge4
{
	public int from, to, cost;
	Edge4(int u, int v, int c)
	{
		this.from = u;
		this.to= v;
		this.cost = c;
	}
}

class Node4 implements Comparable<Node4>
{
	public int node, cost;
	public Node4(int node, int cost)
	{
		this.node = node;
		this.cost = cost;
	}
	public int compareTo(Node4 a)
	{
		return this.cost < a.cost ? -1 : 1;
	}
}

public class _1753 
{
	static final int inf=987654321;
	static int n,m;
	static List<Edge4>[] grp;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		int start = sc.nextInt();
		grp = (ArrayList<Edge4>[]) new ArrayList[n+1];
		for(int i=1; i<=n; i++)
			grp[i] = new ArrayList<Edge4>();
		for(int i=0; i<m; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u].add(new Edge4(u, v, c));
		}
		dstra(start);
	}
	
	public static void dstra(int start)
	{
		boolean[] visit = new boolean[n+1];
		int[] cost = new int[n+1];
		for(int i=1; i<=n; i++)
			cost[i] = inf;				
		cost[start] = 0;
		visit[start] = true;
		PriorityQueue<Node4> PQ = new PriorityQueue<Node4> ();
		PQ.add(new Node4(start, 0));		
		while(!PQ.isEmpty())
		{
			Node4 min = null;
			while(!PQ.isEmpty())
			{
				min = PQ.poll();
				if(cost[min.node] >= min.cost)
					break;
			}
			int minNode = min.node;
			visit[minNode] = true;
			for(Edge4 e : grp[minNode])
			{
				if(visit[e.to])
					continue;
				
				int newCost = cost[e.from] + e.cost;
				if(cost[e.to] > newCost)
				{
					cost[e.to] = newCost;
					PQ.add(new Node4(e.to, newCost));
				}
			}
		}
		
		for(int i=1; i<=n; i++)
		{
			if(cost[i]==inf)
				System.out.println("INF");
			else
				System.out.println(cost[i]);
		}
	}
}
