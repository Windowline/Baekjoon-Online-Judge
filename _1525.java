import java.util.*;

public class _1525 
{
	static int[][] F;
	static int dx[] = {1, -1, 0, 0};
	static int dy[] = {0, 0, -1, 1};
	final static int ans = 123456789;
		
	 static void swarp(StringBuilder s, int a, int b)
	{
		char tmp = s.charAt(a);
		s.setCharAt(a, s.charAt(b));
		s.setCharAt(b, tmp);
	}
	
	static int solve(StringBuilder start)
	{
		HashMap hsm = new HashMap<Integer, Integer>();
		Queue<StringBuilder> Q = new LinkedList<StringBuilder>();
		Q.add(start);
		hsm.put(Integer.parseInt(start.toString()), 0);
		while(!Q.isEmpty())
		{
			StringBuilder cur = (StringBuilder)Q.poll();
			int key = Integer.parseInt(cur.toString());
			
			if(key==ans)
				return (int)hsm.get(key);
			
			int prev = (int)hsm.get(key);
			
			for(int i=0; i<4; i++)
			{
				int idx = cur.indexOf("9");				
				int y = idx/3;
				int x = idx%3;
				int ny = y + dy[i];
				int nx = x + dx[i];
				if(ny>=0 && ny<=2 && nx>=0 && nx<=2)
				{
					int n_idx = ny*3 + nx;
					swarp(cur, idx, n_idx);
					int k = Integer.parseInt(cur.toString());
					
					if(!hsm.containsKey(k))
					{
						hsm.put(k, prev+1);
						Q.add(new StringBuilder(Integer.toString(k)));
					}
					swarp(cur, idx, n_idx);
				}				
			}
		 }
		return -1;
	}
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		StringBuilder state = new StringBuilder("");
		for(int i=1; i<=3; i++)
			 for(int j=1; j<=3; j++)
			 {
				 int t = sc.nextInt();
				 if(t==0) t = 9;
				 state.append(Integer.toString(t));
			 }
		
		System.out.println(solve(state));
	}

}
