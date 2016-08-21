import java.util.*;
 
public class Main 
{
    public static void main(String agrs[])
    {
        Scanner sc = new Scanner(System.in);
         
        String s = sc.nextLine();
        String t = sc.nextLine();
         
        String n=null;
        String m = null;
         
        if(s.length() < t.length())
        {
            n = t;
            m = s;
        }
        else
        {
            n = s;
            m = t;
        }
         
        int lcm = lcm(n.length(),m.length());
         
        StringBuilder sb1 = new StringBuilder(n);
        StringBuilder sb2 = new StringBuilder(m);
         
        while(sb1.length()<lcm)
            sb1.append(n);
        while(sb2.length()<lcm)
            sb2.append(m);
         
        if(sb1.toString().equals(sb2.toString()))
            System.out.println(1);
        else
            System.out.println(0);
             
    }
         
    public static int lcm(int n, int m)
    {
        int a=n;
        int b=m;
     
        while(a!=b)
        {
            if(a<b)
                a+=n;
            else
                b+=m;               
        }
        return a;
    }
     
}
