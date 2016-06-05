import java.util.*;

class Edge implements Comparable<Edge>
{
	public int from, to, cost;
	public Edge(int f, int t, int c)
	{
		this.from = f;
		this.to= t;
		this.cost = c;
	}
	public int compareTo(Edge another)
	{
		return this.cost > another.cost ? 1 : -1;
	}
	
}


public class _1197 
{
	public static int V,E;
	public static List<Edge> edges;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		V = sc.nextInt();
		E = sc.nextInt();
	
				
		edges = new ArrayList<Edge>();
		for(int e=1; e<=E; e++)
		{
			int from = sc.nextInt();
			int to = sc.nextInt();
			int cost = sc.nextInt();			
			edges.add(new Edge(from, to ,cost));
		}
			
		kruskal();
	}
	
	public static int find(int[] p, int x)
	{
		int tmp = x;
		while(p[tmp]!=tmp)
			tmp = p[tmp];
		
		return tmp;
	}
	public static void union(int[] p, int x, int y)
	{
		int n1 = find(p, x);
		int n2 = find(p, y);
		p[n1] = n2;
	}
	
	public static void kruskal()
	{
		int answer = 0;
		int p[] = new int[V+1];
		for(int v=1; v<=V; v++)
			p[v]=v;
			
		Collections.sort(edges);
		for(Edge e : edges)
		{
			int g1 = find(p, e.from);
			int g2 = find(p, e.to);
			if(g1!=g2)
			{
				answer += e.cost;
				union(p, g1, g2);
			}
		}		
		System.out.println(answer);
	}
}
