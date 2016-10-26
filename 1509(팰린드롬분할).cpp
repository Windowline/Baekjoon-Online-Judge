#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<cstring>
#define INF 987654321
using namespace std;
char S[2501];
int dp[2501];
int isp[2501][2501];
int check(int i, int j)
{
	if (i == j)
		return 1;
	if (i + 1 == j)
		return isp[i][j] = (S[i] == S[j]) ? 1 : -1;
	if (isp[i][j] != 0)
		return isp[i][j];
	if (S[i] != S[j])
		return isp[i][j] = -1;	
	return isp[i][j] = (check(i + 1, j - 1) == 1) ? 1 : -1;
}
int minCnt(int i)
{
	if (i == 0)
		return 1;
	if (dp[i] != -1)
		return dp[i];
	int ans = INF;
	for (int k = i; k >= 0; k--)
			if(check(k,i)==1)
				ans = min(ans, minCnt(k - 1));
	return dp[i] = ans + 1;
}
int main()
{
	scanf("%s", S);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", minCnt(strlen(S) - 1));
	return 0;
}
