//https://www.acmicpc.net/problem/1707
import java.util.*;
 
public class Main
{
    static Scanner sc;
    static int V,E, TC;
    static List<Integer>[] graph;
    static int[] group;
    public static void main(String[] args) 
    {
        sc = new Scanner(System.in);
        TC = sc.nextInt();
        for(int tc=0; tc<TC; tc++)
        {
            V = sc.nextInt();
            E = sc.nextInt();
            graph = new List[V+1];
            for(int i=1; i<=V; i++)
                graph[i] = new ArrayList<Integer>();
             
            group = new int[V+1];
            for(int i=1; i<=E; i++)
            {
                int v = sc.nextInt();
                int u = sc.nextInt();
                graph[v].add(u);
                graph[u].add(v);
            }
             
            for(int i=1; i<=V; i++)
                if(group[i]==0)
                    setGroup(i, 1);
             
            boolean answer = true;
            for(int v=1; v<=V; v++)
            {
                for(int n : graph[v])
                    if(group[v]==group[n])
                    {
                        answer = false;
                        break;
                    }
            }
             
            if(answer)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
         
     
    }   
    public static void setGroup(int node, int g)
    {
        group[node] = g;
        for(int next : graph[node])
            if(group[next]==0)
                setGroup(next, 3-g);
    }
     
 
}
