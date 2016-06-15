//https://www.acmicpc.net/problem/11724
import java.util.*;
public class _11724
{
    static int N,M;
    static Scanner sc;
    static boolean[][] grp;
    static boolean[] check;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        grp = new boolean [N+1][N+1];
        check = new boolean[N+1];
        for(int i=1; i<=M; i++)
        {
            int node1 = sc.nextInt();
            int node2 = sc.nextInt();
            grp[node1][node2] = true;
            grp[node2][node1] = true;
        }
        // TODO Auto-generated method stub
        solve();
    }
    public static void solve()
    {
        int answer = 0;
        for(int node=1; node<=N; node++)
        {
            if(!check[node])
            {
                DFS(node);
                answer++;
            }
        }
        System.out.println(answer);
    }
    public static void DFS(int node)
    {
        for(int next=1; next<=N; next++)
        {
            if(grp[node][next] && !check[next])
            {   
                check[next] = true;
                DFS(next);
            }
        }
    }
 
}
