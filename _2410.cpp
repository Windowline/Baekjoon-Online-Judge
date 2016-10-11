#include<iostream>
#include<math.h>
#define MAX 1000000
#define MOD 1000000000
using namespace std;
int N;
int dp[MAX + 1];
int main()
{
	cin >> N;
	for (int i = 0; i <= N; i++)
		dp[i] = 1;
	for (int n = 1; ; n++)
	{
		int num = pow(2, n);
		if (num > N)
			break;
		for (int x = 1; x <= N; x++)
			if (x - num >= 0)
				dp[x] = (dp[x] + dp[x - num])%MOD;
	}
	cout << dp[N] << endl;
	return 0;
}
