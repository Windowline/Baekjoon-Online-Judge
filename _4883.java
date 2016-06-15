import java.util.*;
import java.math.*;
public class _4883 
{
    static int R;
    static int gr[][];
    static long cache[][];
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int tc=1;
        while(true)
        {
            R = sc.nextInt();
            if(R==0)
                break;
            gr = new int[R][3];
            cache = new long[R+1][3+1];
            for(int i=0; i<R; i++)
            {
                gr[i][0] = sc.nextInt();
                gr[i][1] = sc.nextInt();
                gr[i][2] = sc.nextInt();
            }
            /*
            for(int i=0; i<R; i++)
            {
                System.out.println(gr[i][0] + " " +gr[i][1] + " "+ gr[i][2]); 
            }
            */
            System.out.println(tc+". "+minDist(R-1, 1));
            tc++;
        }
    }
     
    public static long minDist(int r, int c) // r행 c열까지오는 최소비용
    {
        if(r==0)
        {
            if(c==0)
                return 987654321;
            else if(c==1)
                return gr[0][1];
            else if(c==2)
                return gr[0][1] + gr[0][2];         
        }
         
        if(cache[r][c]!=0)
            return cache[r][c];     
         
        long answer = 987654321;
        if(c==0)
        {
            answer = minDist(r-1, 0);
            answer = Math.min(answer, minDist(r-1, 1));
        }
        else if(c==1)
        {
            answer = minDist(r, 0);
            answer = Math.min(answer, minDist(r-1, 0));
            answer = Math.min(answer, minDist(r-1, 1));
            answer = Math.min(answer, minDist(r-1, 2));
        }
        else if(c==2)
        {
            answer = minDist(r, 1);
            answer = Math.min(answer, minDist(r-1, 1));
            answer = Math.min(answer, minDist(r-1, 2));
        }
         
        return (cache[r][c] = answer + gr[r][c]);
    }
 
}
