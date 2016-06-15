import java.util.*;
 
 
public class _10216
{
    static int T,N;
    static int[] y, x, r;
    static boolean[] visited;
    static int gcnt=0;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
         
        T = sc.nextInt();
        for(int t=0; t<T; t++)
        {
            N = sc.nextInt();
            y = new int[N];
            x = new int[N];
            r = new int[N];
            for(int i=0; i<N; i++)
            {
                int tx = sc.nextInt();
                int ty = sc.nextInt();
                int tr = sc.nextInt();
                y[i] = ty;
                x[i] = tx;
                r[i] = tr;
            }
            List<Integer>[] gr = group();
            visited = new boolean[N];
            gcnt=0;
            for(int s = 0; s<N; s++)
            {
                if(!visited[s])
                {
                    visited[s] = true;
                    dfs(s, gr);
                    gcnt++;
                }
            }
            System.out.println(gcnt);
        }
    }
     
    public static void dfs(int s, List<Integer>[] gr)
    {
        for(int v : gr[s])
        {
            if(!visited[v])
            {
                visited[v] = true;
                dfs(v, gr);
            }
        }
    }
     
    public static List<Integer>[] group()
    {
        //boolean [][] gr = new boolean[N][N];
        List<Integer>[] gr = new ArrayList[N];
        for(int i=0; i<N; i++)
            gr[i] = new ArrayList<Integer>();
        for(int i=0; i<N-1; i++)
        {           
            for(int j=0; j<N; j++)
            {
                if(i==j)
                    continue;
                int ptp = (y[j]-y[i])*(y[j]-y[i]) + (x[j]-x[i])*(x[j]-x[i]);
                int rtr = (r[j]+r[i])*(r[j]+r[i]);
                if(ptp<=rtr)
                {
                    gr[i].add(j);
                    gr[j].add(i);
                }
            }
        }   
        return gr;
    }
 
}
