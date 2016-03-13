//https://www.acmicpc.net/problem/11055
#include<stdio.h>
int N;
int arr[1000];
int DP[1000];
void solve()
{
	//DP[end] = MAX(DP(j)) + arr[end] ( j<end이고 arr[j] < arr[end] 인 j중에서)
	DP[0] = arr[0];
	int answer = arr[0];
	for (int end = 1; end < N; end++)
	{
		int max = 0;
		for (int j = 0; j <= end - 1; j++)
		{
			if (arr[j] < arr[end] && max < DP[j])
				max = DP[j];
			
			DP[end] = max + arr[end];
		}
		
		answer = answer < DP[end] ? DP[end] : answer;
	}
	printf("%d\n", answer);
}

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);

	solve();
	return 0;
}
