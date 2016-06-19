#include<stdio.h>
long int N, M;
int arr[10000];
//https://www.acmicpc.net/problem/2003

void solve2()
{
	int s = 0;
	int e = 0; 
	int answer = 0;
	while (s<N && e<N)
	{
		long int sum = 0;
		for (int i = s; i <= e; i++)
			sum += arr[i];

		if (sum == M)
		{
			s++;
			e++;
			answer++;
		}
		else if (sum > M)
			s++;
		else if (sum < M)
			e++;
	}
	printf("%d\n", answer);
}




int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);

	solve2();

	return 0;
}

