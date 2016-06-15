import java.util.*;
 
public class _1717
{
 
    static Scanner sc = new Scanner(System.in);
     
    static int N,M;
    static int[] Set;
     
    public static void main(String[] args) 
    {
        // TODO Auto-generated method stub
 
        N = sc.nextInt();
        M = sc.nextInt();
        Set = new int[N+1]; //0~N
         
        for(int i=0; i<=N; i++)
            Set[i] = i;
         
         
        int func;
        int s1, s2;
        for(int i=0; i<M; i++)
        {
            func = sc.nextInt();
            s1 = sc.nextInt();
            s2 = sc.nextInt();
             
            if(func==0) // 합침
                union(s1, s2);
            else
                isSameSet(s1, s2);
        }
    }
     
    public static void isSameSet(int s1, int s2)
    {
        if(find(s1)==find(s2))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
     
    public static void union(int s1, int s2) //  p[y]=x --> x의 자식은 y로
    {
        Set[find(s2)] = find(s1);       
    }
     
    public static int find(int x) {
        if (x == Set[x]) {
        return x;
        } else {
        int y = find(Set[x]);
        Set[x] = y;
        return y;
        }
        }
     
    public static int find1(int x) // 어떤 집합에 x가 있는지?, set[a]=a 이면 a는 집합의 대표(루트)
    {
        while(Set[x]!=x)
            Set[x] = x;
         
        return x;
    }
 
}
