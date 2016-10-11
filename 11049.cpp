#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ay[501];
int ax[501];
int dp[501][501];
int N;
const int inf = 987654321;
int minMul(int i, int j)
{
	if (i== j)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];

	int min_v = inf;
	for (int k = i; k < j; k++)
	{
		int tmp = minMul(i, k) + minMul(k + 1, j) + ay[i] * ax[k] * ax[j];
		min_v = min(min_v, tmp);
	}
	return dp[i][j] = min_v;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> ay[i] >> ax[i];
	
	memset(dp, -1, sizeof(dp));
	cout << minMul(0, N - 1) << endl;

	return 0;
}
