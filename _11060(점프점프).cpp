#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF = 987654321;
int a[1001];
int dp[1001]; // i까지오는 최소 점프 
int N;
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", a + i);

	for (int i = 1; i < N; i++)
		dp[i] = INF;

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= a[i]; j++)
		{
			dp[i + j] = min(dp[i + j], dp[i] + 1);
		}
	}
	if (dp[N - 1]==INF)
		cout << -1 << endl;
	else
		cout << dp[N - 1] << endl;
	
	
	return 0;
}
