#include<iostream>
using namespace std;
int n;
int dp[31][8];
int main()
{
	cin >> n;
	// 0:공백 , 1:상 , 2:중, 3:상중, 4:하, 5:상하, 6:하중, 7:모두
	dp[1][0] = 1;
	dp[1][1] = dp[1][2] = dp[1][4] = dp[1][5] = dp[1][7]  = 0;
	dp[1][3] = dp[1][6] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i][7] = dp[i - 1][6] + dp[i - 1][3] + dp[i - 1][0];
		dp[i][6] = dp[i - 1][1] + dp[i - 1][7];
		dp[i][5] = dp[i - 1][2];
		dp[i][4] = dp[i - 1][3];
		dp[i][3] = dp[i - 1][7] + dp[i - 1][4];
		dp[i][2] = dp[i - 1][5];
		dp[i][1] = dp[i - 1][6];
		dp[i][0] = dp[i - 1][7];
	}
	cout << dp[n][7] << endl;

	return 0;
}
