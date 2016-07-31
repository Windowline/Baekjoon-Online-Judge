#include<iostream>
#include<string>
using namespace std;

int d[4001][4001];
int main()
{
	string s, t, n, m;
	cin >> s >> t;

	if (s.length() < t.length())
	{
		n = t;
		m = s;
	}
	else
	{
		n = s;
		m = t;
	}

	//d[i][j]: i,j로 끝나는 연속 최장길이
	int max = 0;
	for (int i = 1; i <= n.length(); i++)
	{
		for (int j = 1; j <= m.length(); j++)
		{
			if (n[i-1] == m[j-1])
			{
				d[i][j] = d[i - 1][j - 1] + 1;
				max = max > d[i][j] ? max : d[i][j];
			}
		}
	}
	
	cout << max << endl;

	return 0;
}
