import java.util.*;
import java.math.*;
 
class P
{
    public  int node;
    public int point;
    public P(int p, int n)
    {
        node = n;
        point = p;
    }
}
 
 
public class _2660 
{
    static int N;
    static boolean [][] gr;
    static int point, answer;
    static boolean[] visited;
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        gr = new boolean[N+1][N+1];
        while(true)
        {
            int from = sc.nextInt();
            int to = sc.nextInt();
            if(from==-1 && to==-1)
                break;          
            gr[from][to] = true;
            gr[to][from] = true;
        }
         
        int min = 987654321;
        int minT[] = new int[N+1];
        for(int s = 1; s<=N; s++)
        {
            visited = new boolean[N+1];
            visited[s] = true;
            int t =  getPoint(s);
            minT[s] = t;
            min = Math.min(min, t);
        }
        System.out.print(min+" ");
        Queue Q = new LinkedList<Integer>();
        int cnt=0;
        for(int s=1; s<=N; s++)
            if(minT[s]==min)
            {
                Q.add(s);
                cnt++;
            }
        System.out.println(cnt);
        while(!Q.isEmpty())
            System.out.print(Q.poll()+" ");
        System.out.println("");
         
    }
 
    public static int getPoint(int start)
    {
        int answer = 1;
        Queue<P> Q = new LinkedList<P>();
        for(int i=1; i<=N; i++)
            if(i!=start && gr[start][i])
            {
                visited[i] = true;
                Q.add(new P(1, i));
            }
         
        while(!Q.isEmpty())
        {
            P next = (P)Q.poll();
            answer = Math.max(answer, next.point);
            for(int i=1; i<=N; i++)
            {
                if(i!=start && !visited[i] && gr[next.node][i])
                {
                    visited[i] = true;
                    Q.add(new P(next.point+1, i));
                }   
            }       
        }
        return answer;
    }
 
}
