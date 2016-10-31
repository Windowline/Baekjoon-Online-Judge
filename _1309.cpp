#include<iostream>
using namespace std;
const int MOD = 9901;
int N;
int dp[3][100000 + 1];
int main()
{
	cin >> N;

	for (int i = 0; i < 3; i++)
		dp[i][0] = 1; // 0:x 1:배치 1:위 2: 아래

	for (int n = 1; n < N; n++)
	{
		dp[0][n] = (dp[0][n - 1] + dp[1][n - 1] + dp[2][n - 1]) % MOD;
		dp[1][n] = (dp[0][n - 1] + dp[2][n - 1]) % MOD;
		dp[2][n] = (dp[0][n - 1] + dp[1][n - 1]) % MOD;
	}

	cout << (dp[0][N - 1] + dp[1][N - 1] + dp[2][N - 1]) % MOD << endl;

	return 0;
}
