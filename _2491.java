import java.util.*;

public class _2491 
{
	static int n;
	static int[] a;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		a= new int[n];
		for(int i=0; i<n; i++)
			a[i] = sc.nextInt();
		
		int ans = 1;	
		int[] d_asc = new int[n];
		int[] d_desc = new int[n];
		d_asc[0] = d_desc[0] = 1;
		int max = a[0];
		int min = a[0];
		for(int i=1; i<n; i++)
		{
			if(max <= a[i])
				d_asc[i] = d_asc[i-1] +1;			
			else
				d_asc[i] = 1;			
				
			if(min >= a[i])
				d_desc[i] = d_desc[i-1]+1;
			else
				d_desc[i] = 1;
		
			min = max = a[i];
			ans = ans < d_asc[i] ? d_asc[i] : ans;
			ans = ans < d_desc[i] ? d_desc[i] : ans;
		}
		System.out.println(ans);
	
	}

}
