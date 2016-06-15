import java.util.*;
 
public class Main 
{
    static int N;
    static String[] ch;
    static StringBuffer answer = new StringBuffer("");
     
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        ch = new String[N];
        for(int i=0; i<N; i++)
            ch[i] = sc.next();
         
        int ptr=0;
        //제자리확인
        if(!ch[0].equals("KBS1"))
        {   
             
            while(!ch[ptr+1].equals("KBS1"))
            {
                answer.append("1");
                ptr++;
            }
            swarp(ptr, ptr+1);      
            answer.append("3");
            ptr++;
             
            if(!ch[0].equals("KBS1"))
            {
                ptr--;
                answer.append("2");
                while(ptr>=1)
                {
                    swarp(ptr-1, ptr);
                    ptr--;
                    answer.append("4");
                }
            }
        }
     
         
        if(!ch[1].equals("KBS2"))
        {
            while(!ch[ptr+1].equals("KBS2"))
            {
                answer.append("1");
                ptr++;
            }
            swarp(ptr, ptr+1);      
            answer.append("3");
            ptr++;
             
            if(!ch[1].equals("KBS2"))
            {
                ptr--;
                answer.append("2");
                while(ptr>=2)
                {
                    swarp(ptr-1, ptr);
                    ptr--;
                    answer.append("4");
                }
            }
        }
     
         
        System.out.println(answer);
    }
     
    public static void swarp(int a, int b)
    {
        String str = ch[a];
        ch[a] = ch[b];
        ch[b] = str;
    }
     
}
