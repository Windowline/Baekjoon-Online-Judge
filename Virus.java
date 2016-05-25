package BJ;
import java.util.*;
//https://www.acmicpc.net/problem/2606
public class Virus 
{
	static int V;
	static int E;
	
	static boolean [][] gr;
	static boolean vs[];
	static int ans=0;
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		V = sc.nextInt();
		E = sc.nextInt();
		
		gr = new boolean[V+1][V+1];
		vs = new boolean[V+1];
		
		int t1, t2;
		for(int i=0; i<E; i++)
		{
			t1= sc.nextInt();
			t2= sc.nextInt();
			
			gr[t2][t1] = true;
			gr[t1][t2] = true;			
		}
		
		vs[1] = true;
		solve(1);
		System.out.println(ans);

	}
	
	public static void solve(int node)
	{	
		if(node!=1) ans++;		
		for(int next=0; next<V+1; next++)
		{
			if(gr[node][next] && vs[next]==false)
			{
				vs[next] = true;
				solve(next);
			}
		}
	}

}
