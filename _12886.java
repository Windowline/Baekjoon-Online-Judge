import java.util.*;
 
public class Main
{   
     
    //static int a,b,c;
    static boolean[][] check;
    static int ans=0;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
         
        check = new boolean[1501][1501];
        search(a, b, c);
        System.out.println(ans);
    }
     
    static void search(int a, int b, int c)
    {
        //System.out.println(a + " " + b+ " "+c);
        if(a==b && b==c && a==c)
        {
            ans = 1;
            return;
        }
         
        if(check[a][b])
            return;
        check[a][b] = true;
         
        if(a!=b)
        {
            if(a>b)
                search(a-b, b*2, c);
            else
                search(a*2, b-a, c);
        }       
        if(b!=c)
        {
            if(b>c)
                search(a, b-c, c*2);
            else
                search(a, b*2, c-b);
        }
        if(a!=b)
        {
            if(a>c)
                search(a-c, b, c*2);
            else
                search(a*2, b, c-a);        
        }
    }
}
소스코드 공개
