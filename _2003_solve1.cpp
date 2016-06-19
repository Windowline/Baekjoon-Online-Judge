#include<stdio.h>
//https://www.acmicpc.net/problem/2003
long int N, M;
int arr[10000];
void solve()
{
	int answer = 0;
	for (int s = 0; s < N; s++)
	{
		long int sum = 0;
		for (int e = s; e < N; e++)
		{
			sum += arr[e];
			if (sum >= M)
				break;
		}
		if (sum == M)
			answer++;
	}
	printf("%d\n", answer);
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);

	solve();

	return 0;
}

