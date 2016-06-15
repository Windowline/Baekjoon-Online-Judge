import java.util.*;
 
public class _2879
{
    static int R,C;
    static char[][] F;
    static int spy[] = {0, 0, 1, 1};
    static int spx[] = {0, 1, 0, 1};
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        R = sc.nextInt();
        C = sc.nextInt();
        F = new char[R][C];
        sc.nextLine();
         
        for(int y=0; y<R; y++)
        {
            String line = sc.nextLine();
            for(int x=0; x<C; x++)
            {
                F[y][x] = line.charAt(x);
            }
        }
        /*
        for(int y=0; y<R; y++)
        {
            for(int x=0; x<C; x++)
                System.out.print(F[y][x] + " ");
             
            System.out.println("");         
        }
        */     
        solve();
    }
     
    public static void solve()
    {
        int[] answer = {0, 0, 0, 0, 0};
         
        for(int y=0; y<=R-2; y++)
        {
            for(int x=0; x<=C-2; x++)
            {
                int Xcnt=0;
                boolean bd=false;
                 
                for(int p=0; p<4; p++)
                {
                    int ty = y+spy[p];
                    int tx = x+spx[p];
                     
                    //System.out.println(ty + " , " +tx);
                     
                    if( ty>=R || tx>=C || F[ty][tx]=='#' )
                    {
                        bd=true;
                        continue;
                    }
                     
                    if(F[ty][tx]=='X')
                    {   
                        Xcnt++;
                        //System.out.println("aaaa   "+ ty + " , " +tx +" /   "+Xcnt);
                    }
                }
                if(Xcnt==0)
                {
                    //System.out.println("0: " +y +" , " +x);
                }
                if(bd==false)
                    answer[Xcnt]++;
                //System.out.println("========================");
            }
        }
         
        for(int i=0; i<=4; i++)
            System.out.println(answer[i]);
    }
}
