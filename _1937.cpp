#include<iostream>
#include<algorithm>
using namespace std;
int m[501][501];
int cache[501][501];
int n;
int mvx[4] = { -1, 1, 0, 0 };
int mvy[4] = { 0, 0, -1, 1 };

int maxLife(int y, int x)
{
	if (y<1 || x<1 || y>n || x>n)
		return 0;

	if (cache[y][x] != -1)
		return cache[y][x];

	int ans = 0;
	for (int p = 0; p < 4; p++)
		if (m[y][x] > m[y + mvy[p]][x + mvx[p]])
			ans = max(ans, maxLife(y + mvy[p], x + mvx[p]));

	return cache[y][x] = (ans+1);
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> m[i][j];
			cache[i][j] = -1;
		}

	int ans = 0;
	for (int y = 1; y <= n; y++)
		for (int x = 1; x <= n; x++)
			ans = max(ans, maxLife(y, x));
	cout << ans << endl;

	return 0;
}
