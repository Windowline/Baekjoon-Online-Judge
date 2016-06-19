import java.util.*;

class Edge_2
{
	public int from, to, cost;
	Edge_2(int u, int v, int c)
	{
		this.from = u;
		this.to= v;
		this.cost = c;
	}
}

class Node_2 implements Comparable<Node_2>
{
	public int node, cost;
	public Node_2(int node, int cost)
	{
		this.node = node;
		this.cost = cost;
	}
	public int compareTo(Node_2 a)
	{
		return this.cost < a.cost ? -1 : 1;
	}
}

public class _11779
{
	static final int inf=987654321;
	static int n,m;
	static List<Edge_2>[] grp;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();		
		grp = (ArrayList<Edge_2>[]) new ArrayList[n+1];
		for(int i=1; i<=n; i++)
			grp[i] = new ArrayList<Edge_2>();
		
		for(int i=0; i<m; i++)
		{
			int u = sc.nextInt();
			int v = sc.nextInt();
			int c = sc.nextInt();
			grp[u].add(new Edge_2(u, v, c));
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
		int[] path = new int[n+1];
		for(int i=1; i<=n; i++)
			cost[i] = inf;				
		cost[start] = 0;
		path[start] = -1;
		visit[start] = true;
		PriorityQueue<Node_2> PQ = new PriorityQueue<Node_2> ();
		PQ.add(new Node_2(start, 0));		
		while(!PQ.isEmpty())
		{
			Node_2 min = null;
			while(!PQ.isEmpty())
			{
				min = PQ.poll();
				if(cost[min.node] >= min.cost)
					break;
			}
			int minNode = min.node;
			visit[minNode] = true;
			for(Edge_2 e : grp[minNode])
			{
				int newCost = cost[e.from] + e.cost;
				if(cost[e.to] > newCost)
				{
					cost[e.to] = newCost;
					PQ.add(new Node_2(e.to, newCost));
					path[e.to] = minNode;
				}
			}
		}
		
		//path print
		Stack<Integer> p = new Stack<Integer>();
		int t = end;
		int cnt=0;
		while(t!=-1)
		{
			p.push(t);
			t = t=path[t];
			cnt++;
		}
		System.out.println(cost[end]);
		System.out.println(cnt);		
		while(!p.isEmpty())
			System.out.print(p.pop()+" ");
		System.out.println("");
		
	}
}
