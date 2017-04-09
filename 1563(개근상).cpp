#include <stdio.h>
#include <cstring>
#define MOD 1000000
int d[1001][2][2][2] = { 0, };

int main()
{
	int n;
	scanf("%d", &n);
	d[1][0][0][0] = d[1][1][0][0] = d[1][0][0][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int late = 0; late <= 1; late++) {
			for (int a1 = 0; a1 <= 1; a1++) {
				for (int a0 = 0; a0 <= 1; a0++) {
					d[i][late][a1][a0] = 0;
					if (a0 == 0){//오늘 결석 x
						d[i][late][a1][a0] = d[i][late][a1][a0] + (d[i - 1][late][0][a1] + d[i - 1][late][1][a1]) % MOD; //오늘 출석
						if (late >= 1) {
							d[i][late][a1][a0] = d[i][late][a1][a0] + (d[i - 1][late - 1][0][a1] + d[i - 1][late - 1][1][a1]) % MOD; //오늘 지각
						}
					}
					else if(a0==1){ //오늘 결석 o
						if (a1 == 0) {
							d[i][late][a1][a0] = d[i][late][a1][a0] + (d[i - 1][late][0][a1] + d[i - 1][late][1][a1]) % MOD;
						}
						else {
							d[i][late][a1][a0] = d[i][late][a1][a0] + d[i - 1][late][0][a1] % MOD;
						}
					}
				}
			}
		}
	}
	int ans = 0;
	for (int late = 0; late <= 1; late++) {
		for (int a1 = 0; a1 <= 1; a1++) {
			for (int a0 = 0; a0 <= 1; a0++) {
				ans = (ans + d[n][late][a1][a0]) % MOD;
			}
		}
	}
	printf("%d\n", ans);

}
