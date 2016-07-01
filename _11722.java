import java.util.*;

public class _11722 
{	
	static int n;
	static int[] a,d;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		a = new int[n];
		d = new int[n];
		for(int i=0; i<n; i++)
			a[i] = sc.nextInt();
		int ans = d[0] = 1;
		for(int i=1; i<n; i++)
		{	
			d[i] = 1;
			for(int k=0; k<=i-1; k++)
			{
				if(a[i] < a[k] && d[i] < d[k]+1)
				{
					d[i] = d[k]+1;
					ans = ans < d[i] ? d[i] : ans;
				}
			}
		}
		System.out.println(ans);
	}
}
