import java.util.*;


public class _10844 
{
	static int n;
	static long d[][] = new long[100+1][9+1];
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		
		for(int i=1; i<=9; i++)
			d[1][i] = 1; // i로 끝나는 1자릿수 계단수
		
		for(int i=2; i<=n; i++)
		{
			for(int s=0; s<=9; s++)
			{				
				if(s==9)
					d[i][s] = d[i-1][s-1];
				else if(s==0)
					d[i][s] = d[i-1][s+1];					
				else
					d[i][s] = d[i-1][s-1] + d[i-1][s+1];
				
				d[i][s] = d[i][s]%1000000000;
			}
		}
		
		long answer = 0;
		for(int s=0; s<=9; s++)
		{
			answer += d[n][s];
			answer = answer%1000000000;
		}
		System.out.println(answer);
		
	}
	
	

}
