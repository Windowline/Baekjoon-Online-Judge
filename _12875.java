import java.util.*;
 
 
public class Main
{
    static final int inf = 1001;
    static int n,d;
    static int[][] grp;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        d = sc.nextInt();
         
        sc.nextLine();
         
        grp = new int[n+1][n+1];
        for(int i=1; i<=n; i++)
        {
            String line = sc.nextLine();
            for(int j=0; j<n; j++)
            {
                if(line.charAt(j)=='Y')
                    grp[i][j+1] = 1;
                else
                    grp[i][j+1] = inf;
            }
        }
         
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i!=j && grp[i][j] > grp[i][k] + grp[k][j])
                        grp[i][j] = grp[i][k] + grp[k][j];
                }
            }
        }
         
        int max = 0;
        boolean flg = true;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                if(i!=j && grp[i][j]==inf)
                {
                    flg = false;
                    break;
                }
                if(grp[i][j]<inf && max < grp[i][j])
                {
                    max = max < grp[i][j] ? grp[i][j] : max;
                }
            }
         
        //print(grp);
         
        if(!flg || max==0)
            System.out.println(-1);
        else
            System.out.println(max*d);
    }
     
     
    public static void print(int[][]g)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                System.out.print(g[i][j]+" ");
            }
            System.out.println();
        }
         
    }
 
}
