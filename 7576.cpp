#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
int n, m;
int F[1001][1001];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
bool check[1001][1001];
class pos
{
	public:
		int y, x, day;
		pos(int y, int x, int day)
		{
			this->y = y;
			this->x = x;
			this->day = day;
		}
};

int main()
{
	cin >> n >> m;
	int max_cnt = n*m;
	queue<pos> Q;
	int total = 0;
	for (int y = 0; y < m; y++)
		for (int x = 0; x < n; x++)
		{
			cin >> F[y][x];
			if (F[y][x] == -1) max_cnt--;
			if (F[y][x] == 1)
			{
				Q.push(pos(y, x, 1));
				total++;
			}
		}

	int ans = 0;
	while (!Q.empty())
	{
		pos cur = Q.front();
		Q.pop();
		ans = max(ans, cur.day);
		for (int i = 0; i < 4; i++)
		{
			int ny = cur.y + dy[i];
			int nx = cur.x + dx[i];
			if (ny >= 0 && ny < m && nx >= 0 && nx < n)
			{
				if (F[ny][nx] == 0)
				{
					F[ny][nx] = cur.day + 1;
					total++;
					Q.push(pos(ny, nx, cur.day+1));
				}
			}
		}
	}
	if (total == max_cnt)
		cout << ans-1 << endl;
	else
		cout << -1 << endl;

	return 0;
}
