#include<iostream>
#include<string>
#include<math.h>
using namespace std;
string num;
int b;
int main()
{
	cin >> num >> b;
	long long ans = 0;
	for (int i = num.length() - 1; i >= 0; i--)
	{
		int coff;
		if (num[i] >= 'A' && num[i] <= 'Z')
			coff = 10 + (num[i] - 'A');
		else
			coff = num[i] - '0';

		ans += coff*pow(b, num.length() - 1 - i);
	}

	cout << ans << endl;

	return 0;
}
