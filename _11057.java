import java.util.*;

public class _11057 
{
	static int n;
	static int[][] d = new int[1000+1][10];
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		
		//int sum = 0;
		for(int i=0; i<=9; i++)
			d[1][i] = 1;
	
		for(int i=2; i<=n; i++)
		{
			int sum = 0; // sum(d[i-1][k])
			for(int k=0; k<=9; k++)
			{				
				sum += d[i-1][k];
				sum %= 10007;
				d[i][k] = sum;
			}
		}

		int ans=0;
		for(int i=0; i<=9; i++)
		{
			ans+=d[n][i];
			ans %= 10007;
		}
		System.out.println(ans);
	}

}
