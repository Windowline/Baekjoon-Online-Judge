import java.util.*;
import java.math.*;
public class Main 
{
    static int N;
    static int[][] map;
    static data[][] dataMap;
     
    static int gMap[][];
    static int lMap[][];
     
    static boolean[][] visited;
    static int[] mvPattern_y ={-1, 1, 0, 0}; 
    static int[] mvPattern_x ={0, 0, -1, 1};
    static class data
    {
        int group;
        int len;
        int y;
        int x;
        public data(int group, int len, int y, int x)
        {
            this.group = group;
            this.len = len;
            this.y = y;
            this.x = x;
        }
    }
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        map = new int[N][N];
        gMap = new int[N][N];
        lMap = new int[N][N];
        visited = new boolean[N][N];
         
        for(int y=0; y<N; y++)
            for(int x=0; x<N; x++)
                map[y][x] = sc.nextInt();
         
         
         
        grouping();
        extendData();
        /*
        System.out.println("=======================");
        for(int yy=0; yy<N; yy++)
        {
            for(int xx=0; xx<N; xx++)
                System.out.print(gMap[yy][xx]+" ");
            System.out.println("");
        }
         
        System.out.println("=======================");
        for(int yy=0; yy<N; yy++)
        {
            for(int xx=0; xx<N; xx++)
                System.out.print(gMap[yy][xx]+" ");
            System.out.println("");
        }
        System.out.println("=======================");
        for(int yy=0; yy<N; yy++)
        {
            for(int xx=0; xx<N; xx++)
                System.out.print(lMap[yy][xx]+" ");
            System.out.println("");
        }
        */
         
        int answer = -1;
         for (int i=0; i<N; i++) {
                for (int j=0; j<N; j++) {
                    for (int k=0; k<4; k++) {
                        int x = i+mvPattern_x[k];
                        int y = j+mvPattern_y[k];
                        if (0 <= x && x < N && 0 <= y && y < N) {
                            if (gMap[i][j] != gMap[x][y]) {
                                if (answer == -1 || answer > lMap[i][j] + lMap[x][y]) {
                                    answer = lMap[i][j] + lMap[x][y];
                                }
                            }
                        }
                    }
                }
            }
         
        System.out.println(answer);
    }
     
 
     
    public static void grouping()
    {
        int g=1;
        for(int y=0; y<N; y++)
        {
            for(int x=0; x<N; x++)
                if(map[y][x]==1 && !visited[y][x])
                    BFS(y, x, g++);
        }   
    }
    public static void extendData()
    {
        Queue<Integer> yQ = new LinkedList<Integer>();
        Queue<Integer> xQ = new LinkedList<Integer>();
        for(int y=0; y<N; y++)
        {   
            for(int x=0; x<N; x++)
            {
                if(map[y][x]==1)
                {
                    lMap[y][x] = 0; 
                    yQ.add(y);
                    xQ.add(x);
                }
                else
                    lMap[y][x] = -1;
            }
        }
         
        while(!yQ.isEmpty())
        {
            int y = yQ.poll();
            int x = xQ.poll();
            for(int p=0; p<4; p++)
            {
                int ny = y + mvPattern_y[p];
                int nx = x + mvPattern_x[p];
                if(ny>=0 && ny<N && nx>=0 && nx<N && lMap[ny][nx]==-1)
                {
                    lMap[ny][nx] = lMap[y][x]+1; 
                    gMap[ny][nx] = gMap[y][x];
                    yQ.add(ny);
                    xQ.add(nx);
                }       
            }
        }
    }
     
    public static void BFS(int y, int x, int g)
    {
        Queue<Integer> xQ = new LinkedList<Integer>();
        Queue<Integer> yQ = new LinkedList<Integer>();
        xQ.add(x);
        yQ.add(y);
        while(!xQ.isEmpty())
        {
            int ty = yQ.poll();
            int tx = xQ.poll();
            gMap[ty][tx] = g;
            for(int p=0; p<4; p++)
            {
                int ny = ty + mvPattern_y[p];
                int nx = tx + mvPattern_x[p];
                if(ny>=0 && ny<N && nx>=0 && nx<N && !visited[ny][nx] && map[ny][nx]==1)
                {
                    visited[ny][nx] = true;
                    yQ.add(ny);
                    xQ.add(nx);
                }
            }
        }
    }
 
}
