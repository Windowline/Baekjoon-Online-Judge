#include<stdio.h>
using namespace std;
int N, S, M;
int a[101];
bool dp[101][1001];
int main()
{
	scanf("%d %d %d", &N, &S, &M);
	for (int i = 1; i <= N; i++)
		scanf("%d", a + i);

	dp[0][S] = true;
	for (int i = 1; i <= N; i++)
	{
		for (int x = 0; x <= M; x++)
		{
			if (x - a[i] >= 0 && dp[i - 1][x - a[i]])
				dp[i][x] = true;
			if (x + a[i] <= M && dp[i - 1][x + a[i]])
				dp[i][x] = true;
		}
	}
	bool find = false;
	for (int x = M; x >= 0; x--)
		if (dp[N][x])
		{
			printf("%d\n", x);
			find = true;
			break;
		}
	if (!find)
		printf("-1\n");

	return 0;
}
