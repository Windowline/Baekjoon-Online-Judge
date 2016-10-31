#include<stdio.h>
#include<algorithm>
using namespace std;
int N, M;
int a[100000 + 1];
int b[100000 + 1];
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", a + i);

	scanf("%d", &M);
	for (int i = 0; i < M; i++)
		scanf("%d", &b[i]);

	sort(a, a + N);

	for (int m = 0; m < M; m++)
	{
		bool search = false;
		int v = b[m];
		int l = 0;
		int r = N - 1;
		while (l <= r)
		{
			int mid = (l + r) / 2;
			if (a[mid] == v)
			{
				printf("1\n");
				search = true;
				break;
			}
			else if (a[mid] < v)
				l = mid + 1;
			else if (a[mid] > v)
				r = mid - 1;
		}
		if (!search)
			printf("0\n");
	}

	return 0;
}
