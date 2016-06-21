import java.util.*;

public class _1956 
{
	static final int inf = 987654321;
	static int v,e;
	static int[][] d;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		v = sc.nextInt();
		e = sc.nextInt();
		d = new int[v+1][v+1];		
		for(int i=1; i<=v; i++)
			for(int j=1; j<=v; j++)
				d[i][j] = inf;		
		
		for(int i=0; i<e; i++)
		{
			int from = sc.nextInt();
			int to = sc.nextInt();
			int c = sc.nextInt();
			d[from][to] = c;
		}
		
		for(int k=1; k<=v; k++)
			for(int i=1; i<=v; i++)
				for(int j=1; j<=v; j++)
					d[i][j] = Math.min(d[i][j], d[i][k]+d[k][j]);	
		
		int answer = inf;
		for(int i=1; i<=v-1; i++)
			for(int j=i+1; j<=v; j++)
				if(d[i][j]!=inf && d[j][i]!=inf)
					answer = Math.min(answer, d[i][j]+d[j][i]);
		
		if(answer==inf)
			System.out.println(-1);
		else
			System.out.println(answer);
	}

}
