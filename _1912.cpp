#include<stdio.h>
int N;
int arr[100000];
int DP[100000];

void solve()//DP[i] i로끝나는연속합의 최대
{	
	int answer = arr[0];
	DP[0] = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (DP[i-1] < 0)
			DP[i] = arr[i]; //전이 음수면 그냥 자기자신이 최대
		else
			DP[i] = DP[i - 1] + arr[i];

		answer = answer > DP[i] ? answer : DP[i];
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
