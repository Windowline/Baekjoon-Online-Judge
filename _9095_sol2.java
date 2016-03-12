import java.util.*;

public class Main 
{
	static Scanner sc = new Scanner(System.in);
	static int N, TC;
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		
		TC = sc.nextInt();
		
		for(int tc=0; tc<TC; tc++)
		{
			N = sc.nextInt();
			int ans =0;
			
			for(int i=1; i<=3; i++)
				ans+=solve(i);
			
			System.out.println(ans);
		}
		
		
	}
	
	
	public static int solve(int v)
	{
		if(v>N) return 0;
		if(v==N) return 1;
	
		int ans=0;
		
		for(int n=1; n<=3; n++)
			ans+=solve(v+n);

		return ans;
	}
	
	
}
