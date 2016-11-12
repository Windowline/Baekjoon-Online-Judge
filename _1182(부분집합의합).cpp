#include<stdio.h>
int a[21];
int N, S;
int main()
{
	scanf("%d %d", &N, &S);

	for (int i = 0; i < N; i++)
		scanf("%d", a + i);

	int ans = 0;
	for (int i = 1; i <= (1<<N); i++) 
	{
		int sum = 0;
		bool flg = false;
		for (int j = 0; j < N; j++)
		{
			if (i&(1 << j))
			{
				sum += a[j];
				flg = true;
			}
		}
		if (sum == S && flg) ans++;
	}

	printf("%d\n", ans);

	return 0;
}
