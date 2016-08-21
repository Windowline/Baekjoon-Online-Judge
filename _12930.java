import java.util.*;
 
class Edge
{
    public int from, to, cost1, cost2;
    Edge(int u, int v, int c1, int c2)
    {
        this.from = u;
        this.to= v;
        this.cost1 = c1;
        this.cost2 = 2;
    }
}
 
class Node implements Comparable<Node>
{
    public int node, cost;
     
    public Node(int node, int cost)
    {
        this.node = node;
        this.cost = cost;
    }
    public int compareTo(Node a)
    {
        return this.cost < a.cost ? -1 : 1;
    }
}
 
 
public class Main
{   
    static final int inf = 98765;
    static int n;
    static List<Edge>[] grp;
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        n  = sc.nextInt();
        sc.nextLine();
         
        grp = (ArrayList<Edge>[]) new ArrayList[n];
        for(int i=0; i<n; i++)
            grp[i] = new ArrayList<Edge>();
         
         
        //가중치1
        for(int i=0; i<n; i++)
        {
            String line = sc.nextLine();
            for(int j=0; j<line.length(); j++)
            {
                if(line.charAt(j)=='.')
                {
                    grp[i].add(new Edge(i, j, inf, inf));
                }
                else
                {
                    int w1 = line.charAt(j)-'0';
                    grp[i].add(new Edge(i, j, w1, inf));
                }
            }
        }
     
        //가중치2
        for(int i=0; i<n; i++)
        {
            String line = sc.nextLine();
            for(int j=0; j<line.length(); j++)
            {
                if(line.charAt(j)=='.')
                {
                    //grp[i].add(new Edge(i, j, 0, 0));
                    continue;
                }
                else
                {
                    int w2 = line.charAt(j)-'0';
                    for(int k=0; k<grp[i].size(); k++)
                    {
                        if(grp[i].get(k).from==i && grp[i].get(k).to==j)
                            grp[i].get(k).cost2 = w2;                           
                    }
                }
            }
        }
        dstra(0);
    }
     
     
    public static void dstra(int start)
    {
        boolean[] visit = new boolean[n];
        int[] costMul = new int[n];
        int[] costSumCo1 = new int[n];
        int[] costSumCo2 = new int[n];
        for(int i=0; i<n; i++)
        {
            costMul[i] = inf;
            costSumCo1[i] = inf;
            costSumCo2[i] = inf;
        }
        costMul[start] = 0;
        costSumCo1[start] = 0;
        costSumCo2[start] = 0;
         
        visit[start] = true;
        PriorityQueue<Node> PQ = new PriorityQueue<Node> ();
        PQ.add(new Node(start, 0));     
        while(!PQ.isEmpty())
        {
            Node min = null;
            while(!PQ.isEmpty())
            {
                min = PQ.poll();
                if(costMul[min.node] >= min.cost)
                    break;
            }
            int minNode = min.node;
            visit[minNode] = true;
            for(Edge e : grp[minNode]) // e = to
            {
                int sumCo1 = costSumCo1[e.from] + e.cost1;
                int sumCo2 = costSumCo2[e.from] + e.cost2;
                int newCost = sumCo1 * sumCo2;
                 
                if(costMul[e.to] > newCost)
                {
                    costMul[e.to] = newCost;
                    costSumCo1[e.to] = sumCo1;
                    costSumCo2[e.to] = sumCo2;
                    PQ.add(new Node(e.to, newCost));                                                
                }
            }
        }
         
        if(costMul[1]!=inf)
            System.out.println(costMul[1]);
        else
            System.out.println(-1);
    }
}
