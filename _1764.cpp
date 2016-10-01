#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int a, b;
int main()
{
	map<string, int> m;
	string t;
	cin >> a >> b;

	while (a--)
	{
		cin >> t;
		if (m[t] == 0)
			m[t] = 1;
		else if (m[t] >= 1)
			continue;
	}
	while (b--)
	{
		cin >> t;
		m[t]++;
	}

	vector<string> ans;
	for (auto p = m.begin(); p != m.end(); p++)
		if (p->second >= 2)
			ans.push_back(p->first);

	cout << ans.size() << endl;
	for (string s : ans)
		cout << s << endl;

	return 0;
}
