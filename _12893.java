import java.util.*;
 
public class Main
{
    static int ans = 1;
    static int n,m;
    static boolean[][] grp;
    static int[] d;
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        grp = new boolean[n+1][n+1];
        d = new int[n+1];
        for(int i=0; i<m; i++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            grp[u][v] = true;
            grp[v][u] = true;
        }
         
        ans = 1;
        for(int i=1; i<=n; i++)
            if(d[i]==0)
            {
                dfs(i, 1);
            }
         
        System.out.println(ans);
    }
     
    public static void dfs(int from, int c)
    {   
        if(d[from]==0)
            d[from] = c;
        else
        {
            if(d[from]!=c)
                ans = 0;            
            return;
        }
        for(int to=1; to<=n; to++)
        {
            if(grp[from][to])
            {
                    dfs(to, -1*c);          
            }
        }
    }
     
     
}
