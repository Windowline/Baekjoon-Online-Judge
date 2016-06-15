import java.util.*;
public class _3933 
{
    static int[] powTable;
    static int N, answer;
    static int ptCnt = 0;
     
    static void combi(int depth, int idx, int sum)
    {
        if(sum>N || depth>4) return;
         
        if(sum==N)
            answer++;
         
        for(int next=idx; next<ptCnt; next++)
            combi(depth+1, next, sum+powTable[next]);
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        while(true)
        {   
            N = sc.nextInt();
            if(N==0) break;
             
            powTable = new int[N+1];
            ptCnt=0;
            for(int i=1; i*i<=N; i++)
                powTable[ptCnt++] = i*i;
 
            answer = 0;
            combi(0,0,0);
            System.out.println(answer);
        }
    }
 
}
