import java.util.*;

class Info
{
	public int x, n;
	public Info(int x, int n)
	{
		this.x = x;
		this.n = n;
	}
}

public class _12851 
{	
	static final int inf = 987654321;
	static int N, K;
	static int d[];
	static int c[];
	static int min_d = inf;
	static int cnt = 0;
	
	public static void bfs()
	{
		Queue Q = new LinkedList<Integer>();
		d[N] = 0;
		c[N] = 1;
		Q.add(N);
	
		while(!Q.isEmpty())
		{
			int x = (Integer)Q.poll();
		
			if(x-1>=0)
			{
				if(d[x-1]==d[x]+1)
				{
					c[x-1] += c[x];
				}
				else if(d[x-1] > d[x] + 1)
				{
					d[x-1] = d[x]+1;
					c[x-1] = c[x];
					Q.add(x-1);
				}
			}
			if(x+1<=100000)
			{
				if(d[x+1]==d[x]+1)
				{
					c[x+1] += c[x];
				}
				
				else if(d[x+1] > d[x] + 1)
				{
					d[x+1] = d[x]+1;
					c[x+1] = c[x];
					Q.add(x+1);
				}
			}
			if(x*2<=100000)
			{
				if(d[x*2]==d[x]+1)
				{
					c[x*2] += c[x];
				}
				else if(d[x*2] > d[x] + 1)
				{
					d[x*2] = d[x]+1;
					c[x*2] = c[x];
					Q.add(x*2);
				}
			}
		}
	}
	
	
	
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		K = sc.nextInt();
		d = new int[100000+1];
		for(int i=0; i<=100000; i++)
			d[i] = inf;
		c = new int[100000+1];
		
		bfs();
		System.out.println(d[K]);
		System.out.println(c[K]);
	}

}
