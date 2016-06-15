import java.util.*;
public class _10942 
{
    static int N,M;
    static int[] arr;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        arr = new int[N+1];
        for(int i=1; i<=N; i++)
            arr[i] = sc.nextInt();
        M = sc.nextInt();
        for(int i=0; i<M; i++)
        {
            int start = sc.nextInt();
            int end = sc.nextInt();
            solve(start, end);
        }
    }
    public static void solve(int start, int end)
    {
        int s=start;
        int e=end;
        int answer = 1;
        while(s<=e)
        {
            //System.out.println("s: "+arr[s] + " , e: "+ arr[e]);
            if(arr[s]!=arr[e])
            {
                answer=0;
                break;
            }
            s++;
            e--;
        }
        System.out.println(answer);
    }
     
}
