import java.util.*;
 
public class _2309 
{
    static int k[];
    public static void main(String[] args)
    {
        k = new int[9];
        int sum=0;
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<9; i++)
        {
            k[i] = sc.nextInt();
            sum+=k[i];
        }
        Arrays.sort(k);
        for(int m1 = 0; m1<8; m1++)
        {
            for(int m2=m1+1; m2<9; m2++ )
            {
                if(sum-k[m1]-k[m2]==100)
                {
                    for(int i=0; i<9; i++)
                        if(! (i==m1 || i==m2))
                            System.out.println(k[i]);
                }
            }
        }
    }
 
}
