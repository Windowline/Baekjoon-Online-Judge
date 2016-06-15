//https://www.acmicpc.net/problem/1922
import java.util.*;
 
class Edge implements Comparable<Edge>
{
     int n1;
     int n2;
     int w;
    public Edge(int n1, int n2, int w)
    {
        this.n1 = n1;
        this.n2 = n2;
        this.w = w;
    }
    @Override // 오름차순
    public int compareTo(Edge e) 
    {
        return w <= e.w ? -1 : 1;
    }
}
 
public class _1922
{
    static int N,M;
    static List<Edge>[] graph;
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        graph = (List<Edge>[]) new ArrayList[N+1];
        for(int i=1; i<=N; i++)
            graph[i] = new ArrayList<Edge>();
         
        for(int i=0; i<M; i++)
        {
            int node1 = sc.nextInt();
            int node2 = sc.nextInt();
            int cost = sc.nextInt();
            graph[node1].add(new Edge(node1, node2, cost));
            graph[node2].add(new Edge(node2, node1, cost));
        }
         
        System.out.println(prim2(1));
    }
     
    public static int prim2(int start)
    {
        int answer = 0;
        boolean[] selected = new boolean[N+1];
        selected[start] = true;
        PriorityQueue<Edge> PQ = new PriorityQueue<Edge>(); //Min Heap
        int next = start;
        for(int i=1; i<=N-1; i++)
        {
            for(Edge e : graph[next])
                PQ.add(e);
             
            Edge e=null;
            while(!PQ.isEmpty())
            {
                 e = PQ.poll();
                if(!selected[e.n2]) break;
            }
            selected[e.n2] = true;
            answer+=e.w;
            next = e.n2;
        }
        return answer;
    }
}
