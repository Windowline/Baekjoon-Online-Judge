//https://www.acmicpc.net/problem/1806

#include<stdio.h>
long long int N, S;
int arr[100000];

void solve()
{
	int start = 0;
	int end = -1;
	int answer = 100000+1;
	long long int sum = 0;
	bool flg = true; // T:end++, F: start++

	while(start<N && end<N)
	{
		if (flg)
			sum += arr[++end];
		else
			sum -= arr[start++];

		if (sum >= S)
		{
			int tmp = end - start + 1;
			answer = (answer > tmp) ? tmp : answer;
			flg = false;
		}
		else
			flg = true;
		
	}
	if (answer == 100001)
		printf("%d\n", 0);
	else
		printf("%d\n", answer);
}

int main()
{
	scanf("%lld %lld", &N, &S);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);

	solve();

	return 0;
}
