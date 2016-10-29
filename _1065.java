import java.util.*;

public class Main 
{
	static int N;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		int ans = 0;
		for(int i=1; i<=N; i++)
		{
			if(i<10) 
				ans++;
			else
			{
				boolean flg = true;
				int t = i;
				int a = t%10;
				t /=10;
				int b = t%10;
				int d = b-a;
				int pv = b;
				while(true)
				{
					t/=10;
					if(t==0)
						break;
					int cur = t%10;
					if(cur-pv!=d)
					{
						flg = false;
						break;
					}
					pv = cur;
				}
				if(flg) 
						ans++;
			}
		}
		System.out.println(ans);
		
	}

}
