1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
import java.util.*;
public class Main
{
    static int N;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner (System.in);
        N = sc.nextInt();
        solve();
    }
    public static void  solve()
    {
        int ans=0;
        for(int i=N; i>=2; i--)
            ans+= cnt5(i);
        System.out.println(ans);
    }   
    public static int cnt5(int n)
    {
        int cnt=0;
        while(true)
        {
            if(n%5==0)
            {
                cnt++;
                n/=5;
            }
            else
                return cnt;
        }
    }
}
