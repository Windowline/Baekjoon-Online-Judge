import java.util.*;

class Where
{
	public int wh, cnt;
	public Where(int wh, int cnt){this.wh = wh; this.cnt = cnt;}
}


public class _1697 
{
	static int n,k;
	static boolean[] v;
	
	static int solve()
	{
		Queue Q = new LinkedList<Where>();
		Q.add(new Where(n, 0));
		while(!Q.isEmpty())
		{
			Where cur = (Where)Q.poll();
			
			if(v[cur.wh])
				continue;
			
			v[cur.wh] = true;
			
			if(cur.wh==k)
				return cur.cnt;
			else
			{
				if(cur.wh+1>=0 && cur.wh+1<=100000)
					Q.add(new Where(cur.wh+1, cur.cnt+1));
				if(cur.wh-1>=0 && cur.wh-1<=100000)
					Q.add(new Where(cur.wh-1, cur.cnt+1));
				if(cur.wh*2>=0 && cur.wh*2<=100000)
					Q.add(new Where(cur.wh*2, cur.cnt+1));
			}
		}
		
		return 1000000;
	}
		
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		v = new boolean[100000+1];
		System.out.println(solve());
	}

}
