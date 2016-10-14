#include<iostream>
#include<string>
#include<queue>
using namespace std;
string target;
int X, Y, K;
char F[101][101];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int dp[101][101][81]; // y, x에서 단어를 완성하는 경우의 수

int getCnt(int y, int x, int i)
{
	if (i == target.length() - 1)
		return 1;
	if (dp[y][x][i] != -1)
		return dp[y][x][i];
	
	int cnt = 0;
	for(int p=0; p<4; p++)
		for (int k = 1; k <= K; k++)
		{
			int ny = y + k*dy[p];
			int nx = x + k*dx[p];
			int ni = i + 1;
			if (ny >= 1 && ny <= Y && nx >= 1 && nx <= X && F[ny][nx] == target[ni])
				cnt += getCnt(ny, nx, ni);
		}
	return dp[y][x][i] = cnt;
}

int main()
{
	cin >> Y >> X >> K;
	for (int y = 1; y <=Y; y++)
	{
		string s;
		cin >> s;
		for (int x = 1; x <= X; x++)
		{
			F[y][x] = s[x - 1];

			for(int i=0; i<=80; i++)
				dp[y][x][i] = -1;
		}
	}
	cin >> target;

	
	
	int ans = 0;
	for (int y = 1; y <= Y; y++)
		for (int x = 1; x <= X; x++)
			if (F[y][x] == target[0])
				ans += getCnt(y, x, 0);
	cout << ans << endl;

	return 0;
}
