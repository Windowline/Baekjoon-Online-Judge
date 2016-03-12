#include<stdio.h>
int N;
int cnt[11];
void setting()
{
	cnt[1] = 1;
	cnt[2] = 2;
	cnt[3] = 4;
	for (int i = 4; i <= 11; i++)
		cnt[i] = cnt[i - 1] + cnt[i - 2] + cnt[i-3];
}
int main()
{	
	setting();
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &N);
		printf("%d\n", cnt[N]);
	}
	return 0;
}
