#include<iostream>
#include<algorithm>
using namespace std;
const int  MAX = 300000;
const int inf = 987654321;
int N;
int dp[MAX + 1]; // dp[x]: i번째 사면체를 쓸때 x개로 만드는 최소한의 사면체
int need[MAX + 1]; // i층까지 쌓는데 필요한 포탄수
int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		dp[i] = i;

	int last = 0;
	int d = 3;
	int sub_d = 3;
	need[1] = 1;
	for (int i = 2; ; i++)
	{
		need[i] = need[i - 1] + d;
		dp[need[i]] = 1;
		d += sub_d;
		sub_d++;
		if (need[i] >= N)
		{
			last = i - 1;
			break;
		}
	}
	dp[0] = 1;
	for (int i = 2; i <= last; i++)
	{
		for (int x = 1; x <= N; x++)
		{
			if (x == need[i])
				dp[x] = 1;
			else if (x - need[i] > 0)
				dp[x] = min(dp[x], dp[x - need[i]] + 1);
		}
	}
	cout << dp[N] << endl;
	return 0;
}
