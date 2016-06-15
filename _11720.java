import java.util.*;
 
public class _11720 
{
 
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        int sum=0;
         
        String line = sc.nextLine();
        for(int c=0; c<line.length(); c++)
        {
            sum+= line.charAt(c) - '0';
        }
         
        System.out.println(sum);
    }
 
}
