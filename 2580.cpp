#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int F[9][9] = { 0, };
bool exY[9][10] = { false, };
bool exX[9][10] = { false, };
bool exF[3][3][10] = { false, };
bool ans = false;

class Pos
{
public: 
	int y;
	int x;
	Pos(int y, int x)
	{
		this->y = y;
		this->x = x;
	}
};

void solve(int cur, vector<Pos> & pos)
{
	if (cur >= pos.size())
	{
		for (int y = 0; y < 9; y++)
		{
			for (int x = 0; x < 9; x++)
				printf("%d ", F[y][x]);
			cout << '\n';
		}
		ans = true;
		return;
	}
	if (ans)
		return;

	int x = pos[cur].x;
	int y = pos[cur].y;
	for (int i = 1; i <= 9; i++)
	{
		if (!exY[y][i] && !exX[x][i] && !exF[y/3][x/3][i])
		{
			exY[y][i] = exX[x][i] = exF[y/3][x/3][i] = true;
			F[y][x] = i;
			solve(cur + 1, pos);
			exY[y][i] = exX[x][i] = exF[y/3][x/3][i] = false;
			F[y][x] = 0;
		}
	}
}

int main()
{
	vector<Pos> pos;
	for (int y = 0; y <9; y++)
	{
		for (int x = 0; x <9; x++)
		{
			cin >> F[y][x];
			if (F[y][x] != 0)
			{
				exY[y][F[y][x]] = true;
				exX[x][F[y][x]] = true;
				exF[y/3][x/3][F[y][x]] = true;
			}
			else
				pos.push_back(Pos(y, x));
		}
	}
	solve(0, pos);

	return 0;
}
