import java.util.*;
 
public class _11721
{
 
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
         
        String line = sc.nextLine();
         
        int p=0;
        while(p<line.length())
        {
            for(int i=0; i<10; i++)
            {
                if(p==line.length())
                    break;
                System.out.print(line.charAt(p));
                p++;
            }
            System.out.println("");
        }
         
         
    }
 
}
