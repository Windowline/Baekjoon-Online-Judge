import java.util.*;
 
public class _10163 
{
    static int N;
    static int[][] F;
    public static void main(String[] args) 
    {   
        Scanner sc = new Scanner (System.in);
        N = sc.nextInt();
        F = new int[200][200];
        for(int i=1; i<=N; i++)
        {
            int ldx = sc.nextInt();
            int ldy = sc.nextInt();
            int w = sc.nextInt();
            int h = sc.nextInt();
            fill(ldy, ldx, w, h, i);
            /*
            for(int y=0; y<=5; y++)
            {
                for(int x=0; x<=5; x++)
                    System.out.print(F[y][x]+ " ");
                System.out.println(" ");            
            }
            */
        }
        int [] cnt = new int[N+1];
        for(int y=0; y<=100; y++)
            for(int x=0; x<=100; x++)
                if(F[y][x]!=0)
                    cnt[F[y][x]]++;
        for(int i=1; i<=N; i++)
            System.out.println(cnt[i]);
    }
    public static void fill(int ldy, int ldx, int w, int h, int num)
    {
        for(int y = ldy; y<ldy+h; y++)
            for(int x=ldx; x<ldx+w; x++)
                F[y][x] = num;      
    }
}
