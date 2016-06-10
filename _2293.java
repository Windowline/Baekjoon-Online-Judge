import java.util.*;

public class _2293 
{
	static int N, K;
	static int[] m;
	static int[][] cache;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		K = sc.nextInt();
		m = new int[N];
		for(int i=0; i<N; i++)
			m[i] = sc.nextInt();
		
		cache = new int[K+1][N+1];
		for(int i=0; i<=K; i++)
			for(int j=0; j<=N; j++)
				cache[i][j] = -1;
		
		System.out.println(cntOfMakeMoney(K, N-1));
	}

	static int cntOfMakeMoney(int curM, int i) // 0~idx화폐를 이용하여 curM을 만드는 경우의 수
	{
		if(i==0)
			return curM%m[0]==0 ? 1 : 0;
		if(cache[curM][i]!=-1)
			return cache[curM][i];
		
		int cnt=0;
		for(int n=0; curM - n*m[i]>=0; n++ )
			cnt += cntOfMakeMoney(curM - n*m[i], i-1);
		
		
		return cache[curM][i] = cnt;
	}
}
