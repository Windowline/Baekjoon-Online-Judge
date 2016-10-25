#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int N, W;
int wx[1001];
int wy[1001];
int path[1001][1001]; //p[i][j]: c1이 i, c2가 j위치일 때, 다음 선택(1, 2)
int dp[1001][1001];

int minDist(int c1, int c2)
{
	int cur = max(c1, c2);
	if (cur == W)
		return 0;

	if (dp[c1][c2] != -1)
		return dp[c1][c2];

	int next = cur + 1;
	int ans1 = minDist(next, c2) + abs(wx[c1] - wx[next]) + abs(wy[c1] - wy[next]);
	int ans2 = minDist(c1, next) + abs(wx[c2] - wx[next]) + abs(wy[c2] - wy[next]);
	int ans = ans1;
	if (ans1 < ans2)
	{
		path[c1][c2] = 1;
	}
	else
	{
		path[c1][c2] = 2;
		ans = ans2;
	}
	return dp[c1][c2] = ans;
}

void print(int i, int j)
{
	printf("%d\n", path[i][j]);

	if (i == W - 1 || j == W - 1)
		return;

	int next = max(i, j) + 1;
	if (path[i][j] == 1)
		print(next, j);
	else if (path[i][j] == 2)
		print(i, next);	
}

int main()
{
	scanf("%d", &N);
	scanf("%d", &W);
	for (int i = 1; i <= W; i++)
		scanf("%d %d", wx + i, wy + i);
	for(int i=0; i<=W; i++)
		for (int j = 0; j <= W; j++)
		{
			dp[i][j] = -1;
			path[i][j] = -1;
		}	
	wx[0] = wy[0] = N;
	int ans1 = minDist(1, 0) + abs(1 - wx[1]) + abs(1 - wy[1]); // c1이 1번사건
	wx[0] = wy[0] = 1;
	int ans2 = minDist(0, 1) + abs(N - wx[1]) + abs(N - wy[1]); // c2가 1번사건
	if (ans1 < ans2)
	{
		printf("%d\n", ans1);
		path[0][0] = 1;
	}
	else
	{
		printf("%d\n", ans2);
		path[0][0] = 2;
	}
	print(0, 0);

	return 0;
}
