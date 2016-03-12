//https://www.acmicpc.net/problem/11052
#include<stdio.h>
int N;
int prices[1001];
int maxP[1001];
int maxPrice2(int N)
{
	maxP[1] = prices[1];
	for (int cnt = 2; cnt <= N; cnt++)
	{
		maxP[cnt] = prices[cnt];
		for (int i = 1; i < cnt; i++)
			if (maxP[cnt] < maxP[cnt - i] + prices[i])
				maxP[cnt] = maxP[cnt - i] + prices[i];
	}
	return maxP[N];
}
int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", prices + i);
	printf("%d\n", maxPrice2(N));
	return 0;
}
