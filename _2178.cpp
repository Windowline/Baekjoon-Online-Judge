#include<stdio.h>
//https://www.acmicpc.net/problem/2178
int N, M;
int maze[101][101];
int cache[101][101];
bool visited[101][101];
int movPattern_x[] = {-1, 1, 0, 0};
int movPattern_y[] = {0, 0, -1, 1};

int getMinDist(int y, int x) // optimal cost from (y, x) to (N, M) = Min(next movable coordinates ~ N,M) + 1  
{
	if (y == N && x == M)
		return 1;
	if (cache[y][x] != -1)
		return cache[y][x];

	int min = 987654321;
	for (int p = 0; p < 4; p++)
	{
		int next_y = y + movPattern_y[p];
		int next_x = x + movPattern_x[p];
		if (next_y <= N && next_x <= M && maze[next_y][next_x] == 1 && !visited[next_y][next_x])
		{
			visited[next_y][next_x] = true;
			int tmp = getMinDist(next_y, next_x);
			min = min < tmp ? min : tmp;
			visited[next_y][next_x] = false;
		}
	}
	return  cache[y][x] = (min + 1);
}

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			scanf("%1d", &maze[i][j]);
			cache[i][j] = -1;
			visited[i][j] = false;
		}

	visited[1][1] = true;
	printf("%d\n", getMinDist(1, 1));
	return 0;
}
