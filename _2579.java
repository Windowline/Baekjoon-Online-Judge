import java.util.*;
import java.math.*;

//avvsa

public class _2579
{
 
    static int N;
    static int[] S;
    static int[][]V;
     
    public static void solve()
    {
        V[1][1] = S[1];
        for(int i=2; i<=N; i++)
        {
            V[i][0] = Math.max(Math.max(V[i-1][0], V[i-1][1]), V[i-1][2]);
            V[i][1] = Math.max(V[i-2][1], V[i-2][2]) + S[i];
            V[i][2] = V[i-1][1] + S[i];
        }
        System.out.println(Math.max(V[N][1], V[N][2]));
    }
     
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        S = new int[N+1];
        for(int i=1; i<=N; i++)
            S[i] = sc.nextInt();
        V = new int[N+1][3];
        solve();    
         
    }
 //abcdedf
 
}
