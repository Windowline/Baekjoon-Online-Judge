package BJ;
import java.util.*;

public class _2841 
{
	static int N,P;
	static int[] n;
	static int[] p;
	static Stack<Integer>[] sts;
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		P = sc.nextInt();
		n = new int[N+1]; //줄 1~6
		p = new int[N+1]; //프렛 2~300000
		sts = new Stack[7];
		for(int i=1; i<=6; i++)
			sts[i] = new Stack<Integer>();
		
		for(int i=1; i<=N; i++)
		{
			n[i] = sc.nextInt();
			p[i] = sc.nextInt();
		}
		
		minCnt();
	}
	
	public static void minCnt()
	{
		int answer = 0;
		for(int i=1; i<=N; i++)
		{
			int cn = n[i];
			int cp = p[i];
			
			if(sts[cn].empty())
			{
				sts[cn].push(cp);
				answer++;
			}
			else
			{
				while(!sts[cn].empty())
				{
					int top = (int)sts[cn].peek();				
					if(top < cp)
					{
						sts[cn].push(cp);
						answer++;
						break;
					}
					else if(top==cp)
					{
						//answer--; // 안루름
						break;
					}
					else
					{
						sts[cn].pop();
						answer++;
					}
				}
				if(sts[cn].empty())
				{
					sts[cn].push(cp);
					answer++;
				}
			}
		}
		System.out.println(answer);
	}
}
