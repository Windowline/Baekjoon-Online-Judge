#include<iostream>
#include<cstdio>
using namespace std;
int n;
int h[4];
int answer = 987654321;
bool v[61][61][61];

void getMin(int i, int h1, int h2, int h3) //죽은녀석을통해 튕기는 것 고려
{
//	cout << i << " " << h1 <<"  " << h2 << " " << h3 << " " << endl;

	if ( h1 <= 0 && h2 <= 0 && h3 <= 0)
	{
		answer = answer > i ? i : answer;
		return;
	}

	if (h1 < 0)
		h1 = 0;
	if (h2 < 0)
		h2 = 0;
	if (h3 < 0)
		h3 = 0;

	if (v[h1][h2][h3] || v[h2][h3][h1] || v[h1][h3][h2] || v[h2][h1][h3] || v[h3][h1][h2] || v[h3][h2][h1])
		return;

	v[h1][h2][h3] = true;


	//나머지경우 = 1개가 산 경우 + 2개가 산 경우 + 3개


	//2개
	if (h1 > 0 && h2 > 0 && h3 == 0)
	{
		getMin(i + 1, h1 - 9, h2 - 3, 0);
		getMin(i + 1, h1 - 3, h2 - 9, 0);
	}

	else if (h1 > 0 && h3 > 0 && h2 == 0)
	{
		getMin(i + 1, h1 - 9, 0, h3 - 3);
		getMin(i + 1, h1 - 3, 0, h3 - 9);
	}

	else if (h2 > 0 && h3 > 0 && h1 == 0)
	{
		getMin(i + 1, 0, h2 - 9, h3 - 3);
		getMin(i + 1, 0, h2 - 3, h3 - 9);
	}
	else if (h1 > 0 && h2 == 0 && h3 == 0)
	{
		getMin(i + 1, h1 - 9, 0, 0);
	}

	else if (h2 > 0 && h1 == 0 && h3 == 0)
	{
		getMin(i + 1, 0, h2 - 9, 0);
	}
	else if (h3 > 0 && h1 == 0 && h2 == 0)
	{
		getMin(i + 1, 0, 0, h3 - 9);
	}
	else // 다 살음
	{
		getMin(i + 1, h1 - 9, h2 - 3, h3 - 1);
		getMin(i + 1, h1 - 9, h2 - 1, h3 - 3);
		getMin(i + 1, h1 - 3, h2 - 9, h3 - 1);
		getMin(i + 1, h1 - 3, h2 - 1, h3 - 9);
		getMin(i + 1, h1 - 1, h2 - 9, h3 - 3);
		getMin(i + 1, h1 - 1, h2 - 3, h3 - 9);

	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> h[i];

	//memset(v, false, sizeof(v));
	
	for (int i = 0; i <= 60; i++)
		for (int j = 0; j <= 60; j++)
			for (int k = 0; k <= 60; k++)
				v[i][j][k] = false;

//	v[h[1]][h[2]][h[3]] = true;
	getMin(0, h[1], h[2], h[3]);
	cout << answer << endl;

	return 0;
}
