#include<iostream>
#include<algorithm>
using namespace std;
int s[1001][3];
int d[1001][3];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int c = 0; c < 3; c++)
			cin >> s[i][c];

	for (int c = 0; c < 3; c++)
		d[0][c] = s[0][c];

	for (int i = 1; i < n; i++)
	{
		d[i][0] = min(d[i-1][1], d[i-1][2]) + s[i][0]; // r
		d[i][1] = min(d[i-1][0], d[i-1][2]) + s[i][1]; // g
		d[i][2] = min(d[i-1][0], d[i-1][1]) + s[i][2]; // g
	}
	int ans = d[n-1][0];
	ans = min(ans, d[n-1][1]);
	ans = min(ans, d[n-1][2]);

	cout << ans << endl;

	return 0;
}
