package Study;
import java.util.Scanner;
//https://www.acmicpc.net/problem/2193
public class Pinary_Number
{	
	static int N;
	static long[][] cache;
	
	public static void main(String[] args)
	{
		 Scanner sc = new Scanner(System.in);
		  
		 N = sc.nextInt();
		 
		 long ret;
		 
			 
		 if(N==1||N==2) ret=1;
		 
		 
		 else
			 ret= solve();
		 
		 System.out.println(ret);
		 
			 
	}
	
	public static long solve()
	{
		cache = new long[N][2];
		for(int i=0; i<N; i++)
			for(int j=0; j<2; j++)
				cache[i][j] = -1;
		
		return subCount(1, 0) + subCount(1, 1);
	}
	
	public static long subCount(int idx, int choice)
	{
		if(idx==N-2) // 마지막자릿수까지 탐색마침
			return 1;
		
		if(choice==0)
		{	
			if(cache[idx+1][0]== -1) cache[idx+1][0] = subCount(idx+1, 0);
			if(cache[idx+1][1]== -1) cache[idx+1][1] = subCount(idx+1, 1);
		
			return cache[idx+1][0] + cache[idx+1][1];
		}
		
		else	
		{
			if(cache[idx+1][0]== -1)
				return cache[idx+1][0] = subCount(idx+1, 0);
			else
				return cache[idx+1][0];
		}
	}
	
}
