#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
long long n, b;
int main()
{
	cin >> n >> b;

	int ten = 'A';
	string ans = "";
	long long tmp = n;
	while (tmp > 0)
	{
		int v = tmp%b;
		char vc;
		if (v >= 10)
		{
			vc = (char)(ten + (v - 10));
			ans += vc;		
		}
		else
			ans += to_string(v);
		tmp /= b;
	}
	
	reverse(ans.begin(), ans.end());
	cout << ans << endl;

	return 0;
}
