#include<iostream>
#include<string>
using namespace std;
bool check(string s)
{
	int top = -1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			top++;
		else
		{
			if (top <=-1)
				return false;
			top--;
		}
	}
	if (top >= 0)
		return false;
	else
		return true;
}

int main()
{
	int tc;
	string input;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> input;
		if (check(input))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
