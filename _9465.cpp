#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int t, n;
int s[2][100000 + 1];
int dp[2][100000 + 1];
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		memset(s, 0, sizeof(s));
		for (int i = 0; i < n; i++)
			scanf("%d", &s[0][i]);
		for (int i = 0; i < n; i++)
			scanf("%d", &s[1][i]);

		memset(dp, 0, sizeof(dp));
		dp[0][0] = s[0][0];
		dp[1][0] = s[1][0];
		dp[0][1] = dp[1][0] + s[0][1];
		dp[1][1] = dp[0][1] + s[1][0];
		for (int i = 1; i < n; i++)
		{
			dp[0][i] = max(dp[1][i - 1], max(dp[0][i-2], dp[1][i-2])) + s[0][i];
			dp[1][i] = max(dp[0][i - 1], max(dp[1][i-2], dp[0][i-2])) + s[1][i];
		}
		int ans = max(dp[0][n - 1], dp[1][n - 1]);
		cout << ans << '\n';
	}
}
