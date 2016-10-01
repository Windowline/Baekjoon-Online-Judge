#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int n, m, s;
bool grp[1001][1001] = { false, };
bool vs[1001]= { false, };

void dfs(int i)
{
	vs[i] = true;
	cout << i << ' ';
	for (int j = 1; j <= n; j++)
		if (grp[i][j] && !vs[j])
			dfs(j);
}

void bfs(int s)
{
	queue<int> Q;
	Q.push(s);
	vs[s] = true;
	while (!Q.empty())
	{
		int cur = Q.front();
		Q.pop();
		cout << cur << ' ';
		for (int j = 1; j <= n; j++)
		{
			if (grp[cur][j] && !vs[j])
			{
				vs[j] = true;
				Q.push(j);
			}
		}
	}
}


int main()
{
	cin >> n >> m >> s;
	int u, v;
	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;
		grp[u][v] = true;
		grp[v][u] = true;
	}
	dfs(s);
	cout << endl;
	memset(vs, false, sizeof(vs));
	bfs(s);
	cout << endl;

	return 0;
}
