import java.util.*;
 
 
 
public class Main
{ 
    static String ori = "quack";
    static String str;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
         
        match2(str);
    }
     
    static void match2(String str)
    {
        int [] order = new int['z'+1];
        order['q'] = 0;
        order['u'] = 1;
        order['a'] = 2;
        order['c'] = 3;
        order['k'] = 4;     
        int cnt[] = new int[5];
         
        int ans = 0;
        for(int i=0; i<str.length(); i++)
        {
            if(str.charAt(i)=='q')
            {
                cnt[order['q']]++;
                if(cnt[order['k']]>0)
                    cnt[order['k']]--;
            }
            else
            {
                char c = str.charAt(i);
                int pre = order[c]-1;
                int cur = order[c];
                                 
                if(cnt[pre]>=1)
                {
                    cnt[cur]++;
                    cnt[pre]--;
                     
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
        }
         
        boolean flg = true;
        for(int i=0; i<=3; i++)
            if(cnt[i]!=0)
                flg = false;
        if(flg)
        {
            if(ans!=-1)
                ans = cnt[4];
             
            System.out.println(ans);
        }
        else
            System.out.println(-1);
    }
}
