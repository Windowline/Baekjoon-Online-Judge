import java.math.*;
import java.util.*;
 
class info implements Comparable<info>
{
    public int start;
    public int end;
    public int v;
     
    public info(int s, int e, int v)
    {
        this.start = s;
        this.end = e;
        this.v = v;
         
    }
    public int compareTo(info s)
    {
        if(this.end < s.end)
            return -1;
        else if(this.end > s.end)
            return 1;
        else
            return 0;
    }
}
 
public class _1446 
{
    static int N,D;
    static List<info> a;
    static boolean s[];
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        D = sc.nextInt();
         
        a = new ArrayList<info>();
        int dc=0;
        for(int i=0; i<N; i++)
        {
            int s = sc.nextInt();
            int e = sc.nextInt();
            int v = sc.nextInt();
             
            if(e-s > v && s<=D && e<=D)
                a.add(new info(s, e, v));       
        }
         
        Collections.sort(a);    
         
        for(int i=0; i<a.size(); i++)
        {
            //System.out.println(a.get(i).start+ " , " + a.get(i).end);
        }
         
        System.out.println(bf(0, 0, 0));
    }
     
    public static int bf(int idx, int dist, int time)
    {
        if(idx==a.size())
        {
            //System.out.println("!"+time + " , " +(D-dist));
            return time + (D-dist);
        }
        if(dist==D)
        {   
            //System.out.println("2"+time);
            return time;
        }
         
        int t1=987654321;
        if(dist <= a.get(idx).start)
            t1 = bf(idx+1, a.get(idx).end, time+(a.get(idx).start-dist) + a.get(idx).v); // 이 지름길 감
         
        int t2 = bf(idx+1, dist, time);
        return Math.min(t1, t2);
    }
 
}
