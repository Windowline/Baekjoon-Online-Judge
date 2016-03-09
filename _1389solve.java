package BJ;
//https://www.acmicpc.net/problem/1389
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class _1389 
{
	static int V,E;
	static int[][] graph;
	public static void main(String[] args) 
	{

		Scanner sc = new Scanner(System.in);
		V = sc.nextInt();
		E = sc.nextInt();	
		graph = new int[V+1][V+1];	
		
		for(int i=1; i<=V; i++)
			for(int j=1; j<=V; j++)
				graph[i][j] = -1;
		
		for(int e=0; e<E; e++)
		{
			int n1 = sc.nextInt();
			int n2 = sc.nextInt();
			graph[n1][n2] = 1;
			graph[n2][n1] = 1;	
		}	
		
		int answer = 0;
		int min = 987654321;
		for(int s=1; s<=V; s++)
		{
			int tmp=shortestPath_in_NoneWeight(s);
			if(min > tmp)
			{
				answer = s;
				min = tmp;
			}
		}
		System.out.println(answer);	
	}
	
	public static int shortestPath_in_NoneWeight(int start)
	{	
		int answer = 0;
		Queue Q = new LinkedList<Integer>();
		int[] dist = new int[V+1];
		for(int v=1; v<=V; v++) 
			dist[v] = -1;
		dist[start] = 0;
		Q.add(start);
		while(!Q.isEmpty())
		{
			int curNode = (int)Q.poll();
			for(int next=1; next<=V; next++)
				if(graph[curNode][next]==1 && dist[next]==-1)
				{
					Q.add(next);
					dist[next] = dist[curNode] + graph[curNode][next]; // dist[curNode] + 1
					answer+=dist[next];
				}
		}

		return answer;
	}
}
