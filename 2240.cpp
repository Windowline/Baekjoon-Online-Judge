#include<stdio.h>
#include<cstring>
using namespace std;
int T, W;
int a[1001];
int dp[1001][31][2];
const int m_inf = -987654321;

int getMax(int t, int w, int here)
{
	if (t == T)
		return 0;

	if (t>=0 && dp[t][w][here] != -1)
		return dp[t][w][here];

	int get = (here == a[t]) ? 1 : 0;
	int another = (here == 1) ? 2 : 1;
	int s1 = m_inf;
	int s2 = m_inf;
	if(w+1<=W)
		s1 = getMax(t + 1, w + 1, another);
	s2 = getMax(t + 1, w, here);
	int ans = ( s1 > s2 ? s1 : s2 ) + get;

	if (t >= 0)
		dp[t][w][here] = ans;

	return ans;
}

int main()
{
	scanf("%d %d", &T, &W);
	for (int i = 0; i < T; i++)
		scanf("%d", a + i);

	for (int i = 0; i <= 1000; i++)
		for (int j = 0; j <= 30; j++)
			for (int k = 0; k <= 1; k++)
				dp[i][j][k] = -1;

	int get = (a[0] == 1) ? 1 : 0;
	printf("%d\n", getMax(-1, 0, 1));

	return 0;
}
