import java.util.*;
public class Main 
{
    static int n;
    static boolean[] ch;
    static int[] a;
    static int[] num;
     
    static void allPerm(int d)
    {
        if(d>n)
        {
            for(int k=1; k<=n; k++)
                System.out.print(num[k]+ " ");
            System.out.println();
            return;
        }
         
        for(int nxt = 1; nxt<=n; nxt++)
            if(!ch[nxt])
            {
                ch[nxt] = true;
                num[d] = a[nxt];
                allPerm(d+1);
                ch[nxt] = false;
            }
    }   
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        a = new int[n+1];
        ch = new boolean[n+1];
        num = new int[n+1];
        for(int i=1; i<=n; i++)
            a[i] = i;       
        allPerm(1);
    }
 
}
