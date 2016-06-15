import java.util.Scanner;
import java.math.*;
 
public class _2455
{
    static int[] in;
    static int[] out;
     
    public static void main(String[] args) 
    {
        // TODO Auto-generated method stub
 
        Scanner sc = new Scanner(System.in);
         
        in = new int[4+1];
        out = new int[4+1];
         
        for(int i=1; i<=4; i++)
        {
            out[i] = sc.nextInt();
            in[i] = sc.nextInt();       
        }
         
        solve();
    }
 
    public static void solve()
    {
        int people = in[1];
        int max = people;
         
         
        for(int i=2; i<=4; i++)
        {
             people = people - out[i] + in[i]; 
              
             max = Math.max(max, people);
              
        }
         
        System.out.println(max);
    }
}
