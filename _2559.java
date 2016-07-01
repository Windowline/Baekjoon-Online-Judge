import java.util.*;

public class _2559
{
	static int n,k;
	static int d[];
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		d = new int[n+1];		
		for(int i=1; i<=n; i++)
		{
			d[i] = sc.nextInt();
		}
		int sum=0;
		for(int i=1; i<=k; i++)
			sum += d[i];
		int ans = sum;
		for(int i=k+1; i<=n; i++)
		{
			sum = sum - d[i-k] + d[i];
			ans = ans < sum ? sum : ans;
 		}
		System.out.println(ans);
	}

}
