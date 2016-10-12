#include<iostream>
#include<cstring>
#include<string>
#include<queue>
using namespace std;
int Y, X;
int F[101][101];
int d[101][101];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
const int inf = 987654321;
void minBreak()
{
	queue<int> xQ, yQ;
	xQ.push(1);
	yQ.push(1);
	d[1][1] = 0;
	while (!xQ.empty())
	{
		int y = yQ.front(); yQ.pop();
		int x = xQ.front(); xQ.pop();
		for (int p = 0; p < 4; p++)
		{
			int ny = y + dy[p];
			int nx = x + dx[p];

			if (ny >= 1 && ny <= Y && nx >= 1 && nx <= X)
			{
				int plus = (F[ny][nx] == 1) ? 1 : 0;

				if (d[ny][nx] > d[y][x] + plus)
				{
					d[ny][nx] = d[y][x] + plus;
					yQ.push(ny);
					xQ.push(nx);
				}
			}
		}
	}
}
int main()
{
	cin >> X >> Y;
	for (int y = 1; y <= Y; y++)
	{
		string s;
		cin >> s;
		for (int x = 1; x <= X; x++)
			F[y][x] = s[x - 1] - '0';
	}
	for (int y = 1; y <= Y; y++)
		for (int x = 1; x <= X; x++)
			d[y][x] = inf;

	minBreak();
	cout << d[Y][X] << endl;
	return 0;
}
