import java.util.*;
class V implements Comparable<V>
{
    public int n;
    public V(int n)
    {
        this.n = n;
    }
    public int compareTo(V v)
    {
        return (this.n <= v.n ? 1 : -1);
 
    }
    public int getV(int n)
    {
        return n;
    }
};
 
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        PriorityQueue PQ1 = new PriorityQueue<V>();
        PriorityQueue PQ2 = new PriorityQueue<V>();
        int N = sc.nextInt();
        for(int i=0; i<N; i++)
        {
            int n = sc.nextInt();
            if(n>0)
                PQ1.add(new V(n));
            else if(n<=0)
                PQ2.add(new V(n*(-1)));     
        }
        int sum = 0;    
        while(!PQ1.isEmpty())
        {
            int t1 = ((V)PQ1.remove()).n;
            if(PQ1.isEmpty())
            {
                sum += t1;
                break;
            }
            int t2 = ((V)PQ1.remove()).n;
             
            if(t1>1 && t2>1)
                sum += (t1*t2);
            else
                sum += (t1+t2);
             
            if(PQ1.isEmpty())
                break;
        }
         
        while(!PQ2.isEmpty())
        {
            int t1 = ((V)PQ2.remove()).n;
            if(PQ2.isEmpty())
            {
                sum -= t1;
                break;
            }
            int t2 = ((V)PQ2.remove()).n;
             
            if(t1 >= 1 && t2 >=1 || (t1==0 || t2==0))
                sum += (t1*t2);
            else
                sum -= (t1+t2);
             
            if(PQ2.isEmpty())
                break;
        }
         
        System.out.println(sum);
    }
 
}
