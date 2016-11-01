#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int N, K;
bool dp[31][31][31][436];
char ans[32];
bool possible(int a, int b, int c, int p)
{
	if (a + b + c == N)
	{
		if (p == K)
		{
			return true;
		}
		return false;
	}

	if (dp[a][b][c][p]) return false;
	
	dp[a][b][c][p] = true;

	int i = a + b + c;

	ans[i] = 'A';
	if (possible(a + 1, b, c, p)) return true;
	
	ans[i] = 'B';
	if (possible(a, b + 1, c, p + a)) return true;

	ans[i] = 'C';
	if (possible(a, b, c + 1, p + a + b)) return true;

	return  false;
}

int main()
{
	cin >> N >> K;
	if (possible(0, 0, 0, 0))
		cout << ans << endl;
	else
		cout << -1 << endl;

	return 0;
}
