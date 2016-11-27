#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;
const int INF = 987654321;
int N;
int adj[16][16];
int dp[16][1 << 16];
int minCost(int cur, int v_state)
{
	if (v_state == (1 << N) - 1)
	{
		if (adj[cur][0] != 0)
			return adj[cur][0];
		else
			return INF;
	}
	if (dp[cur][v_state] != -1)
		return dp[cur][v_state];

	int ans = INF;
	for (int next = 0; next < N; next++)
	{
		if (!(v_state&(1 << next))&& adj[cur][next] != 0)
		{
			int tmp = minCost(next, v_state | (1 << next));
			ans = min(ans, tmp + adj[cur][next]);
		}
	}
	return dp[cur][v_state] = ans;
}

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &adj[i][j]);

	memset(dp, -1, sizeof(dp));
	int v_state = 0;
	printf("%d\n", minCost(0, v_state|1));

	return 0;
}
