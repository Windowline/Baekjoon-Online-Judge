#include<stdio.h>
int N, M;
bool live[5001];
int ret[5001];
int r = 0;
int main()
{
	scanf("%d %d", &N, &M);
	int i = -1;
	int cnt = 0;

	for (int i = 1; i <= N; i++)
		live[i] = true;

	while (1)
	{
		if (live[i])
		{
			cnt++;
			if (cnt == M)
			{
				live[i] = false;
				ret[++r] = i;
				if (r == N)
					break;
				cnt = 0;
			}
		}

		i++;
		if (i == N + 1) i = 1;
	}
	printf("<");
	for (int r = 1; r <N; r++)
		printf("%d, ", ret[r]);
	printf("%d>\n", ret[N]);

	return 0;
}
