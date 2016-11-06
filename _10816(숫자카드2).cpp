#include<stdio.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
int N, M;
int a[500000 + 1];
int b[500000 + 1];
int ans[500000 + 1];
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", a + i);

	scanf("%d", &M);

	unordered_map<int, int> hsm;
	for (int i = 0; i < M; i++)
	{
		scanf("%d", b + i);
		hsm[b[i]] = -1;
	}
	std::sort(a, a + N);
	for (int i = 0; i < M; i++)
	{
		int key = b[i];
		if (hsm[key] != -1)
		{
			ans[i] = hsm[key];
			continue;
		}
		int l = 0;
		int r = N - 1;
		int cnt = 0;
		while (l <= r)
		{
			int mid = (l + r)/2;

			if (a[mid] == key)
			{
				cnt++;
				int l2 = mid-1;
				int r2 = mid+1;
				
				while (a[l2] == key)
				{
					l2--;
					cnt++;
				}
				while (a[r2] == key)
				{
					r2++;
					cnt++;
				}
				hsm[key] = cnt;
				ans[i] = cnt;
				break;
			}
			else if (a[mid] < key)
				l = mid + 1;
			else if (a[mid] > key)
				r = mid - 1;

		}
	}

	for (int i = 0; i < M; i++)
		printf("%d ", ans[i]);
	printf("\n");

	return 0;
}
