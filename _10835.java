import java.util.*;
import java.math.*;
 
public class Main
{
    static int N;
    static int[] L;
    static int[] R;
    static int[][] cache;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        L = new int[N];
        R = new int[N];
         
        for(int i=0; i<N; i++)
            L[i] = sc.nextInt();
        for(int i=0; i<N; i++)
            R[i] = sc.nextInt();        
         
        cache = new int[N][N];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                cache[i][j] = -1;
         
        System.out.println(maxPoint(0, 0));
    }
     
    public static int maxPoint(int lu, int ru)
    {
        if(lu==N || ru==N)
            return 0;
         
        if(cache[lu][ru]!=-1)
            return cache[lu][ru];
         
        int answer = maxPoint(lu+1, ru);
        answer = Math.max(answer, maxPoint(lu+1, ru+1));
        if(L[lu] > R[ru])
            answer = Math.max(answer, maxPoint(lu, ru+1) + R[ru] );
         
        return cache[lu][ru] = answer;
    }
     
}
