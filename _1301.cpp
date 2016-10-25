#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int N;
int g[5];
long long dp[11][11][11][11][11][5][5];
long long cnt(int p1, int p2)
{
	if (g[0] + g[1] + g[2] + g[3] + g[4] == 0)
		return 1;

	if (dp[g[0]][g[1]][g[2]][g[3]][g[4]][p1][p2] != -1)
		return dp[g[0]][g[1]][g[2]][g[3]][g[4]][p1][p2];

	long long ans = 0;
	for (int i = 0; i < 5; i++)
	{
		if (g[i] > 0 && p1 != i && p2 != i)
		{
			g[i]--;
			ans += cnt(p2, i);
			g[i]++;
		}
	}
	return dp[g[0]][g[1]][g[2]][g[3]][g[4]][p1][p2] = ans;
}
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", g + i);
	memset(dp, -1, sizeof(dp));
	long long ans = 0;
	for(int i=0; i<5; i++)
		for (int j = 0; j < 5; j++)
		{
			if (i == j || g[i]==0 || g[j]==0)
				continue;
			g[i]--;
			g[j]--;
			ans += cnt(i, j);
			g[i]++;
			g[j]++;
		}
	cout << ans << endl;

	return 0;
}
