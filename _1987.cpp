#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char F[21][21];
bool V[21][21] = { false, };
bool C['Z' + 1] = { false, };
int Y, X;

int maxCnt(int y, int x)
{
	int subAns = 0;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 1 && ny <= Y && nx >= 1 && nx <= X)
		{
			if (!V[ny][nx] && !C[F[ny][nx]])
			{
				V[ny][nx] = C[F[ny][nx]] = true;
				subAns = max(subAns, maxCnt(ny, nx));
				V[ny][nx] = C[F[ny][nx]] = false;
			}
		}
	}
	return subAns + 1;
}

int main()
{
	cin >> Y >> X;
	string s;
	for (int y = 1; y <= Y; y++)
	{
		cin >> s;
		for (int x = 1; x <= X; x++)
			F[y][x] = s[x - 1];
	}

	V[1][1] = C[F[1][1]] = true;
	cout << maxCnt(1, 1) << endl;

	return 0;
}
