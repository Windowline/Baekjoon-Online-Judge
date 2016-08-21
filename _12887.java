import java.util.*;
 
class Cood
{
    public int y,x;
    public Cood(int y, int x)
    {
        this.y = y;
        this.x = x;
    }
}
 
public class Main 
{   
    static int inf = 987654321;
    static boolean[][] ch;
    static int col, blackCnt;
    static char[][] m;
    static int[] mvx = {0, 0, 1};
    static int[] mvy = {1, -1, 0};
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        col  =sc.nextInt(); 
        m = new char[2][col+1];
        blackCnt = 0;
        sc.nextLine();
        for(int i=0; i<=1; i++)
        {
            String line = sc.nextLine();
            for(int j=0; j<col; j++)
            {
                m[i][j] = line.charAt(j);
                if(m[i][j]=='#')
                    blackCnt++;
            }
             
        }
         
        int sp1 = getShortest(0, 0);
        int sp2 = getShortest(1, 0);
        int sp = Math.min(sp1, sp2);
         
        System.out.println(col*2 - sp - blackCnt);
    }
     
    static int getShortest(int sy, int sx)
    {       
        if(m[sy][sx]=='#')
            return inf;
         
        Queue Q = new LinkedList<Cood>();
        Q.add(new Cood(sy, sx));
        int cost[][] = new int[2][col];
        for(int y=0; y<2; y++)
            for(int x=0; x<col; x++)
                cost[y][x] = inf;
        cost[sy][sx] = 1;
        while(!Q.isEmpty())
        {
            Cood cur = (Cood)Q.poll();      
            for(int i=0; i<3; i++)
            {
                int ny = cur.y + mvy[i]; 
                int nx = cur.x + mvx[i];
                if(ny>=0 && ny<=1 && nx>=0 && nx<col && m[ny][nx]!='#' && cost[ny][nx]==inf)
                {
                    cost[ny][nx] = cost[cur.y][cur.x] + 1;
                    Q.add(new Cood(ny, nx));
                }
            }
        }
     
        return Math.min(cost[0][col-1], cost[1][col-1]);
    }
     
     
 
}
