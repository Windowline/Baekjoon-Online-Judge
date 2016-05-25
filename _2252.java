import java.util.*;

public class _2252 
{
	static int N, M;
	static ArrayList<Integer>[] grp;
	static int[] indi;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		
		indi = new int[N+1];
		grp = new ArrayList[N+1];
		for(int i=1; i<=N; i++)
			grp[i] = new ArrayList<Integer>();
		
		for(int i=0; i<M; i++)
		{
			int first = sc.nextInt();
			int second = sc.nextInt();			
			grp[first].add(second);
			indi[second]++;
		}
		
		topSort();
	}
	
	public static void topSort()
	{
		Queue<Integer> Q = new LinkedList<Integer>();
		for(int i=1; i<=N; i++)
			if(indi[i]==0)
				Q.add(i);		
		
		while(!Q.isEmpty())
		{
			int cur = Q.poll();
			System.out.print(cur+ " ");
			
			for(int i=0; i<grp[cur].size(); i++)
			{
				int next = grp[cur].get(i);
				indi[next]--;
				if(indi[next]==0)
					Q.add(next);
			}
		}
		System.out.println(" ");
	}
}
