#include<stdio.h>
int N,M;
int a[21];
int dp[10001];
int main()
{
	int TC;
	scanf("%d", &TC);
	while (TC--)
	{
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			scanf("%d", &a[i]);
		scanf("%d", &M);

		for (int i = 1; i <= M; i++)
			dp[i] = 0;

		dp[0] = 1;
		for (int n = 0; n < N; n++)
			for (int m = 1; m <= M; m++)
				if (m - a[n] >= 0)
					dp[m] += dp[m - a[n]];

		printf("%d\n", dp[M]);
	}

	return 0;
}
