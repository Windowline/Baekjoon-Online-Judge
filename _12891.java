import java.util.*;
 
public class Main
{
    static int s, p;
    static String str;
    static char[] ch = {'A', 'C', 'G', 'T'};
    static int[] cnt, state;
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        s = sc.nextInt();
        p = sc.nextInt();
        sc.nextLine();
        state = new int['Z'+1];
        str = sc.nextLine();
        cnt = new int[4];
         
        for(int i=0; i<4; i++)
            cnt[i] = sc.nextInt();
         
        solve();
    }
     
    public static void solve()
    {
        //System.out.println("asda");
        int ans = 0;
        for(int i=0; i<=p-1; i++)
            state[str.charAt(i)]++;
        //print();
        //System.out.println(str.substring(0, p));          
        //print();
        if(check())
        {
            //System.out.println(str.substring(0, p));          
            //print();
            //System.out.println("=========================");
            ans++;      
        }
     
        for(int i=1; i+p-1<=str.length()-1; i++)
        {
            state[str.charAt(i-1)]--;
            state[str.charAt(i+p-1)]++;         
            //System.out.println("----------------------------");
            //System.out.println(str.substring(i, i+p));
            //print();
             
            if(check())
            {   
                 
                ans++;
            }
        }
         
        System.out.println(ans);
    }
     
    public static boolean check()
    {
        for(int i=0; i<4; i++)
            if(cnt[i]-state[ch[i]] > 0)
                return false;
        return true;
    }
     
    public static void print()
    {
        for(int i='A'; i<='Z'; i++)
        {   
            if(i=='A' || i=='C' || i=='G' || i=='T')
                System.out.println((char)i +" "+ state[i]);
        }
    }
}
