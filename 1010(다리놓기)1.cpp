#include<stdio.h>
#include<cstring>
int N, M;
long long d[31][31];
long long counting(int n, int m)
{
	if (n==N-1) {
		return m < M ? 1 : 0;
	}
	if (d[n][m] != -1) {
		return d[n][m];
	}
	long long cnt = 0;
	for (int i = m + 1; i < M; i++) {
		cnt += counting(n + 1, i);
	}
	return d[n][m] = cnt;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%d %d", &N, &M);
		memset(d, -1, sizeof(d));
		long long cnt = 0;
		for (int i = 0; i < M; i++) {
			cnt += counting(0, i);
		}
		printf("%lld\n", cnt);
	}

	return 0;
}
