#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
long long a[1000000 + 1];
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lld", a + i);
	sort(a, a + n);
	long long ans =a[0];
	int max_cnt=1;
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1])
			cnt++;
		else
		{
			if (max_cnt < cnt)
			{
				ans = a[i - 1];
				max_cnt = cnt;
			}
			cnt = 1;
		}
	}
	if (max_cnt < cnt)
		ans = a[n - 1];
	printf("%lld\n", ans);
	return 0;
}
