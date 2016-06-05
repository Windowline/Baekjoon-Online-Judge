import java.util.*;

public class _2056_sol2 
{
	public static int[] works, ind;
	public static int N;
	public static List<Integer> grp[];
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		works = new int[N+1];
		ind = new int[N+1];
		grp = (ArrayList<Integer>[])new ArrayList[N+1];
		for(int i=1; i<=N; i++)
			grp[i] = new ArrayList<Integer>();
		
		for(int i=1; i<=N; i++)
		{
			int t = sc.nextInt();
			works[i] = t;
			int preCnt = sc.nextInt();
			for(int j=0; j<preCnt; j++)
			{
				int pre = sc.nextInt();
				grp[pre].add(i);
				ind[i]++;
			}
		}
		topoSort();
	}
	
	public static void topoSort()
	{
		int answer = 0;
		Queue Q = new LinkedList<Integer>();		
		int[] end = new int[N+1];
		for(int i=1; i<=N; i++)
			if(ind[i]==0)
			{
				Q.add(i);
				end[i] = works[i];
			}	
				
		while(!Q.isEmpty())
		{
			int cur = (int)Q.poll();
			for(int next : grp[cur])
			{
				--ind[next];
				if(end[next] < end[cur] + works[next])
					end[next] = end[cur] + works[next];
				if(ind[next]==0)
					Q.add(next);
			}
		}
		for(int i=1; i<=N; i++)
			answer = answer < end[i] ? end[i] : answer;
			
		System.out.println(answer);
	}
	
}
