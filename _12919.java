import java.util.*;
 
 
public class Main
{
    static int ans=0;
    static String s,t;
    static StringBuilder sb;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        t = sc.nextLine();
         
        sb = new StringBuilder(t);
        solve();
        System.out.println(ans);
    }
     
    static void solve()
    {
        if(sb.length()==s.length())
        {
            if(sb.toString().equals(s.toString()))
            {
                ans = 1;
            }
            return;
        }
         
        if(ans==1)
            return;
         
        char last = sb.charAt(sb.length()-1);
        char first = sb.charAt(0);
        if(last=='A')
        {
            sb.deleteCharAt(sb.length()-1);
            solve();
            sb.append('A');
        }
        if(first=='B')
        {
            sb.reverse();
            sb.deleteCharAt(sb.length()-1);
            solve();
            sb.append('B');
            sb.reverse();
        }
    }
 
}
