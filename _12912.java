import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;
class Edge1
{
    public int u,v,c;
     
    public Edge1(int u, int v, int c)
    {
        this.u = u;
        this.v = v;
        this.c = c;
    }
}
class DistInfo
{
    public long dist;
    public int node;
    public DistInfo(long d, int n)
    {
        this.dist = d;
        this.node = n;
    }
}
 
 
public class Main
{
    static int n;
    static List<Edge1>[] grp;
    static List<Edge1> elist;
     
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        grp = (ArrayList<Edge1>[])new ArrayList[n+1];
        elist = new ArrayList<Edge1>();
         
        for(int i=0; i<n; i++)
            grp[i] = new ArrayList<Edge1>();
         
        for(int i=0; i<n-1; i++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int c = sc.nextInt();
            grp[u].add(new Edge1(u, v, c));
            grp[v].add(new Edge1(v, u, c));
            elist.add(new Edge1(u, v, c));
        }
 
         
     
        long ans = 0;
        for(int e=0; e<n-1; e++)
        {
            ans = Math.max(ans, split(elist.get(e)));
        }
         
        System.out.println(ans);
    }
     
    static long split(Edge1 e)
    {
        int o  = e.u;
        int an = e.v;
     
         
        DistInfo d1 = maxDistFrom(o, an);
        DistInfo d2 = maxDistFrom(d1.node, an);
         
        DistInfo d3 = maxDistFrom(an, o);
        DistInfo d4 = maxDistFrom(d3.node, o);
         
        return d2.dist + d4.dist + e.c;
         
    }
     
    static DistInfo maxDistFrom(int start, int ben)
    {
        Queue Q = new LinkedList<Integer>();
        long [] cost = new long[n];
        Q.add(start);
        for(int i=0; i<=n-1; i++)
            cost[i] = -1;
        cost[start] = 0;
         
        while(!Q.isEmpty())
        {
            int cur = (int)Q.poll();
            //System.out.print(cur+ " ");
            if(cur==ben)
                continue;           
            for(int i=0; i<grp[cur].size(); i++)
            {
                Edge1 e = grp[cur].get(i);
                if(e.v==ben || e.u==ben)
                    continue;
                 
                if(cost[e.v]==-1)
                {
                    cost[e.v] = cost[cur] + e.c; // 이전 + 현재
                    Q.add(e.v);
                }
            }
        }
        long max = -1;
        int maxN = -1;
        for(int i=0; i<=n-1; i++)
        {
            //System.out.println(i +" / "+cost[i]);
            if(max < cost[i])
            {
                max = cost[i];
                maxN = i;
            }
        }
        return new DistInfo(max, maxN);
    }
     
}
