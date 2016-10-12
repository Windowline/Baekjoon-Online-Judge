import java.util.*;
import java.math.*;
class Rec
{
	public int n;
	public int x1, y1, x2, y2;
	Rec(int n, int x1, int y1, int x2, int y2)
	{
		this.n = n;
		this.x1 = x1;
		this.y1 =y1;
		this.x2 = x2;
		this.y2 = y2;
	}
	
}
public class Main 
{
	static boolean V[];	
	static Rec[] Recs;
	static int N;
	static int con = 0;
	
	static boolean isConnect(Rec std, Rec E1) // b의 점일부가 a의 안에 포함되면 T
	{
		
	    if(E1.y1 > std.y2 || std.y1 > E1.y2) return false;
	    if(E1.x1 > std.x2 || std.x1 > E1.x2) return false;
	 
	    if((std.x1<=E1.x1 && E1.x1<=std.x2) || (std.x1<=E1.x2 && E1.x2<=std.x2)){
	        if((E1.y1<=std.y1 && std.y1<=E1.y2) || (E1.y1<=std.y2 && std.y2<=E1.y2))
	            return true;
	    }
	    if((std.y1<=E1.y1 && E1.y1<=std.y2) || (std.y1<=E1.y2 && E1.y2<=std.y2)){
	        if((E1.x1<=std.x1 && std.x1<=E1.x2) || (E1.x1<=std.x2 && std.x2<=E1.x2))
	            return true;
	    }
	    return false;

	}
	
	 static void dfs(int s)
	   {
	      V[s] = true;
	      for(int i=0; i<=N; i++)
	         if(isConnect(Recs[s], Recs[i]) && !V[i])
	         {
	            dfs(i);
	         }
	   }
	
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		Recs = new Rec[N+1];
		V = new boolean[N+1];
		grp = new boolean[N+1][N+1];
	
		Recs[0] = new Rec(0, 0, 0, 0, 0);
		for(int i=1; i<=N; i++)
		{
			int x1 = sc.nextInt();
			int y1 = sc.nextInt();
			int x2 = sc.nextInt();
			int y2 = sc.nextInt();
			Recs[i] = new Rec(i, x1, y1, x2, y2);
		
		}
	
		
		for(int i=0; i<=N; i++)
		{
			if(!V[i])
			{
				dfs(i);
				if(i>0)
					con++;
			}
		}
		System.out.println(con);
	}
}
