import java.util.*;
import java.math.*;

public class _1963 
{
	static boolean[] isNotPrime;
	static int d[];
	static int num[];
 	static void Ertos()
	{
 		isNotPrime[1] = true;
		for(int i=2; i<=9999; i++)
		{
			if(!isNotPrime[i])
			{
				int tmp = i+i;
				while(tmp<=9999)
				{
					isNotPrime[tmp] = true;
					tmp+=i;
				}
			}
		}
	}
	
 	static int solve(int src, int dest)
 	{
 		Queue<Integer> Q = new LinkedList<Integer>();
 		Q.add(src);
 		d[src] = 1;
 		while(!Q.isEmpty())
 		{
 			int cur = (int)Q.poll();
 			if(cur==dest)
 				return d[cur];
 			
 			for(int idx=0; idx<4; idx++)
 			{
 				numToArr(cur);
 				int start = (idx==0||idx==3) ? 1 : 0;
 				for(int t=start; t<=9; t++)
 				{
 					num[idx] = t;
 					int nnum = arrToNum();
 					if(!isNotPrime[nnum] && d[nnum]==0)
 					{
 						d[nnum] = d[cur]+1;
 						Q.add(nnum);
 					}
 				}
 			}
 		}
 		
 		return -1;
 	}
 	
 	static void numToArr(int n)
 	{
 		int tmp = n;
 		int i=0;
 		while(tmp>0)
 		{
 			num[i++] = tmp%10;
 			tmp/=10;
 		}
 	}
 	static int arrToNum()
 	{
 		int ret = 0;
 		for(int i=0; i<4; i++)
 			ret += num[i]*(int)Math.pow(10, i);
 		return ret;
 	}
	
	public static void main(String[] args) 
	{
		isNotPrime = new boolean[10000];		
		Ertos();	
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		while(tc-- > 0)
		{
			int src, dest;
			src = sc.nextInt();
			dest = sc.nextInt();
			
			d = new int[100000];
			num = new int[5];
			
			int sol = solve(src, dest);
			
			if(sol==-1)
				System.out.println("Impossible");
			else
				System.out.println(sol-1);
		}
	}

}
