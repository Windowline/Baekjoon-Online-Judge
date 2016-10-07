#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int L, C;

void solve(int i, string cur, vector<char> & alp)
{
	if (cur.size()==L)
	{
		int m = 0;
		int j = 0;
		for (char c : cur)
		{
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') m++;
			else
				j++;
		}
		if (m >= 1 && j >= 2)
			cout << cur << '\n';

		return;
	}
	if (i >= alp.size())
		return;

	solve(i + 1, cur + alp[i], alp);
	solve(i + 1, cur, alp);
}

int main()
{
	cin >> L >> C;
	vector<char> alp;
	for (int i = 0; i < C; i++)
	{
		char t;
		cin >> t;
		alp.push_back(t);
	}
	sort(alp.begin(), alp.end());
	solve(0, "", alp);

	return 0;
}
