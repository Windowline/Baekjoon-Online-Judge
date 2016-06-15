//https://www.acmicpc.net/problem/1167
import java.util.*;
 
class E
{   
    public int from;
    public int to;
    public int weight;
     
    public E(int from, int to, int weight)
    {
        this.from = from;
        this.to=to;
        this.weight=weight;
    }
}
 
public class Main 
{
    static int N;
    public static void main(String[] args) 
    {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        List<E>[] edges = (List<E>[]) new List[N+1];
        for(int i=1; i<=N; i++)
            edges[i] = new ArrayList<E>();
         
        for(int i=1; i<=N; i++)
        {
            int from = sc.nextInt();        
            while(true)
            {
                int to = sc.nextInt();
                if(to==-1) break;
                 
                int w = sc.nextInt();       
                edges[from].add(new E(from, to, w));
            }
        }
         
        int[] dist = getDistTable(edges, 1);
         
        //for(int i=0; i<dist.length; i++)
            //System.out.println(dist[i]);
         
        int start = 1;
        for (int i=2; i<=N; i++) 
            if (dist[i] > dist[start]) 
                start = i;
          
        dist = getDistTable(edges, start);
        int ans = dist[1];
        for (int i=2; i<=N; i++) {
            if (ans < dist[i]) {
                ans = dist[i];
            }
        }
        System.out.println(ans);
    }   
     
    public static int[] getDistTable(List[] edges, int start)
    {
        int[]  dist = new int[N+1];
        Queue Q = new LinkedList<Integer>();
        boolean[] check = new boolean[N+1];
        check[start] = true;
        Q.add(edges[start]);        
        while(!Q.isEmpty())
        {
            List<E> tmp = (List<E>)Q.poll();        
            for(E e : tmp)
            {   
                if(check[e.to]==false)
                {
                    check[e.to] = true;
                    dist[e.to] = dist[e.from] + e.weight;
                    Q.add(edges[e.to]);
                }
            }       
        }
        return dist;
    }
}
