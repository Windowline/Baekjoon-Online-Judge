import java.util.Scanner;
 
public class _6988
{
    static int N;
    static int T[];
    static boolean check[];
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        T = new int[N];
        check = new boolean[1000000]; 
        for(int i=0; i<N; i++)   
        {
            T[i] = sc.nextInt();
            check[T[i]] = true;
        }       
                 
        int answer = 0;
        for(int s=0; s<=N-2; s++)
        {
            //System.out.println("---------------"+s+"-------------");
            for(int j=s+1; j<=N-1; j++)
            {
                int sum = T[s];
                int n=1;
                int d = T[j] - T[s];
                //System.out.println("d:"+d);
                for(int i = T[s]+d; i<=T[N-1]; i+=d)
                {
                    //System.out.println("b: "+T[s]+i); 
                    if(check[i])
                    {
                    //  System.out.println("a: "+i); 
                        sum+=i;
                        n++;
                    }
                    else
                        break;
                }
                //System.out.println("Sum:" + sum);
                if(n>=3 && sum > answer)
                    answer = sum;
            }
        }
        System.out.println(answer);
    }
     
 
}
