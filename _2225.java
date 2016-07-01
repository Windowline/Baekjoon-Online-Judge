import java.util.*;

public class _2225 
{
	final static int mod = 1000000000;
	static int[][] cache;
	static int n,k;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		
		cache = new int[n+1][k+1];
		for(int i=0; i<=n; i++)
			for(int j=0; j<=k; j++)
				cache[i][j] = -1;
		
		System.out.println(getCnt(n, k)%mod);
	}
	
	static int getCnt(int num, int t)
	{
		if(t == 1)
		{
			if(num>=0)
				return 1;
			else
				return 0;
		}
		
		if(cache[num][t]!=-1)
			return cache[num][t];
		
		int cnt = 0;
		for(int i=0; i<=num; i++)
		{
			if(num-i>=0)
			{
				cnt += getCnt(num-i, t-1);
				cnt %= mod;
			}
			else
				break;
		}
		return cache[num][t] = cnt%mod;
	}
}
