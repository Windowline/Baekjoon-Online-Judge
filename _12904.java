import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
 
 
public class Main 
{   
    static Map<String, Integer> hsm;
    static int ans = 0;
    static String s, t;
    static StringBuilder sb1, sb2;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        t = sc.nextLine();
        hsm = new HashMap<String, Integer>();
        sb1 = new StringBuilder(s);
        sb2 = new StringBuilder(t);
         
        while(sb2.length()>sb1.length())
        {
            //System.out.println(sb2.toString());
            if(sb2.charAt(sb2.length()-1)=='A')
            {
                sb2.deleteCharAt(sb2.length()-1);
            }
            else
            {
                sb2.deleteCharAt(sb2.length()-1);
                sb2.reverse();
            }
            //System.out.println(sb2.toString());
        }
        if(sb1.toString().equals(sb2.toString()))
            System.out.println(1);
        else
            System.out.println(0);
    }
 
}
