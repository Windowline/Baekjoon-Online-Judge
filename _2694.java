package BJ;
import java.util.*;
//https://www.acmicpc.net/problem/2694
public class _2694 
{
	static int N;
	static int[] arr;
	static boolean isOK;
	
	public static void btk(int end, int groupSum) //backtracking
	{
		if (isOK) return;
		if (end==N-1)
		{
			isOK = true;
			return;
		}
		int sum = 0;
		for (int ne = end+1; ne < N; ne++)
		{
			sum += arr[ne];
			if (sum == groupSum)
			{	
				btk(ne, sum);
				break;
			}
			if (sum > groupSum)
				break;
		}
	}
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		int TC = sc.nextInt();
		
		for(int t=0; t<TC; t++)
		{
			N = sc.nextInt();
			sc.nextLine();
			
			arr = new int[N+1];
			int input=0;
			while(true)
			{
				for(int i=0; i<10; i++)
				{
					arr[input++] = sc.nextInt();
					
					if(input==N)
						break;
				}
				if(input==N)
					break;
			}
			
			
			//solve
			int gsum = 0;
			for (int e = 0; e < N; e++)
			{
				isOK = false;
				gsum += arr[e];
				btk(e, gsum);
				if (isOK)
				{
					System.out.println(gsum);
					break;
				}
			}
		}

	}

}
