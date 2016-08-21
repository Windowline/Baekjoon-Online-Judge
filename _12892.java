import java.util.*;
 
class Gift implements Comparable<Gift>
{
    public int p, v;
    public Gift(int p, int v)
    {
        this.p = p;
        this.v = v;
    }
    public int compareTo(Gift g)
    {
        return this.p < g.p ? -1 : 1;
    }
     
}
 
 
public class Main
{
    static long ans=0;
    static int n,d;
    static Gift[] g;
    static long[] vSums;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        d = sc.nextInt();
        g = new Gift[n];
        for(int i=0; i<n; i++)
        {
            int p = sc.nextInt();
            int v = sc.nextInt();
            g[i] = new Gift(p,v);
        }
        Arrays.sort(g);
        vSums = new long[n];
        vSums[0] = g[0].v;
        for(int i=1; i<n; i++)
            vSums[i] = vSums[i-1] + g[i].v; 
         
        long ans = 0;
        int s = 0;
        int e = 0;
        while(s<n && e<n)
        {
            while(e<n && g[e].p -g[s].p < d)
                e++;
             
            if(e==n && g[e-1].p - g[s].p < d)
            {
                if(s>0)
                    ans = Math.max(ans, vSums[n-1]-vSums[s-1]);
                else
                    ans = Math.max(ans, vSums[n-1]);
                break;
            }
            if(s>0)
                ans = Math.max(ans, vSums[e-1] - vSums[s-1]);
            else
                ans = Math.max(ans, vSums[e-1]);
             
            while(s<e && g[e].p - g[s].p >= d)
                s++;
        }
         
        System.out.println(ans);
    }
     
}
