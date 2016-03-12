#include<stdio.h>
//https://www.acmicpc.net/problem/11052
int N;
int prices[1001]; //prices[5] = 5개의 세트 가격
int cache[1001];
int maxPrice(int cnt) // cnt만큼 팔 때의 최대 가격
{
	if (cnt <= 0) return 0;
	if (cache[cnt] != 0) return cache[cnt];
	int max = 0;
	for (int i = 1; i <= N; i++)
	{	
		if (cnt - i >= 0)
		{
			int tmp = maxPrice(cnt - i) + prices[i];
			max = max > tmp ? max : tmp;
		}
	}
	return cache[cnt] = max;
}

int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", prices + i);

	printf("%d\n", maxPrice(N));

	return 0;
}
