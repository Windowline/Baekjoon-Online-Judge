#include<stdio.h>
using namespace std;
int d0[41] = { 0, };
int d1[41] = { 0, };
int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc-- > 0)
	{
		int n;
		scanf("%d", &n);
		d0[0] = 1;
		d1[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			d0[i] = d0[i - 1] + d0[i - 2];
			d1[i] = d1[i - 1] + d1[i - 2];
		}
		printf("%d %d\n", d0[n], d1[n]);
	}
	return 0;
}
