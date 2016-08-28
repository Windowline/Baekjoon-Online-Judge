#include <iostream>
#include<cstdio>
using namespace std;
long long dp[101];
int main()
{
	dp[1] = dp[2] = dp[3] = 1;
	for (int i = 4; i <= 101; i++)
		dp[i] = dp[i - 2] + dp[i - 3];
	int tc;
	cin >> tc;
	while (tc-- > 0)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}

	return 0;
}
