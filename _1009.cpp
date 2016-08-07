#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long tc,a,b;
	cin >> tc;
	while (tc-- > 0)
	{
		cin >> a >> b;
		if (a%10==0)
		{
			cout << 10 << endl;
			continue;
		}
		if (b == 1)
		{
			cout << a % 10 << endl;
			continue;
		}
		vector<int> term;
		term.push_back(a%10);
		long long tmp = (long long) a*a;
		while (tmp % 10 != (a%10))
		{
			term.push_back((int)(tmp % 10));
			tmp *= a;
		}
		int index = (int)( b % (term.size()) - 1);
		if (index == -1)
			index = term.size() - 1;
		cout << term[index] << endl;

	}

	return 0;
}
