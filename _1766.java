package BJ;
import java.util.*;
//https://www.acmicpc.net/problem/1766

class Element implements Comparable<Element>
{
	 int num;
	public Element(int num)
	{
		this.num = num;
	}
	@Override // 오름차순
	public int compareTo(Element o) 
	{
		return num <= o.num ? -1 : 1;
	}
}
public class _1766 
{
	static int N,M;
	static int[] backs;
	static List<Integer>[] graph;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		backs = new int[N+1];
		graph =(List<Integer>[]) new ArrayList[N+1];
		
		for(int i=1; i<=N; i++)
			graph[i] = new ArrayList<Integer>();
		
		for(int i=0; i<M; i++)
		{	
			int first = sc.nextInt();
			int second = sc.nextInt();
			graph[first].add(second);
			backs[second]++;
		}
		
		solve();
	}
	
	static void solve()
	{
		PriorityQueue<Element> PQ = new PriorityQueue<Element>(); //Min Heap
		for(int i=1; i<=N; i++)
			if(backs[i]==0)
				PQ.add(new Element(i));
		
		while(!PQ.isEmpty())
		{
			Element e = PQ.poll();
			System.out.print(e.num+ " ");
			for(int next : graph[e.num])
			{
				backs[next]--;
				if(backs[next]==0)
					PQ.add(new Element(next));
			}
		}
	}
}
