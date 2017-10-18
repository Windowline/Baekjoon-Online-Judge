#include<stdio.h>
#include<cstring>
int N, M;
int t;
long long d[31][31];

int main()
{
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%d %d", &N, &M);
		memset(d, 0, sizeof(d));
		for (int m = 0; m < M; m++) {
			d[0][m] = 1;
		}
		for (int n = 1; n < N; n++) {
			long long sum = 0;
			for(int m=n; m<M; m++) {
				sum += d[n - 1][m - 1];
				d[n][m] = sum;
			}
		}
		long long ans = 0;
		for (int m = 0; m < M; m++) {
			ans += d[N - 1][m];
		}
		printf("%lld\n", ans);
	}
	return 0;
}
