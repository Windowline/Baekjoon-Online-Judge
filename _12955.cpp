#include<iostream>
using namespace std;
int N, M, K;
int s[20];
long long ans = 0;

bool check(int start)
{
	int l = start;
	int r = start + M - 1;
	while (l <= r)
	{
		if (s[l++] != s[r--])
			return false;
	}
	return true;
}

void btk(int i, int use)
{
	if (i == N)
	{
		int pCnt = 0;
		for (int start = 0; start <= N - M; start++)
		{
			if (check(start))
				pCnt++;
		}
		if (pCnt >= K)
		{
			long long p = 1;
			for (long long i = 0; i < use; i++)
				p *= (26 - i);

			ans += p;
		}
		return;
	}

	for (int k = 1; k <= use; k++)
	{
		s[i] = k;
		btk(i + 1, use);
	}
	s[i] = use + 1;
	btk(i + 1, use + 1);
}

int main()
{
	cin >> N >> M >> K;
	btk(0, 0);
	cout << ans << endl;
	return 0;
}
