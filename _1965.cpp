#include<iostream>
using namespace std;
int a[1001];
int lis[1001];
int N;
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];

	lis[0] = 1;
	for (int i = 1; i < N; i++)
	{
		int m = 0;
		for (int k = 0; k < i; k++)
			if(a[i] > a[k])
				m = m < lis[k] ? lis[k] : m;
		lis[i] = m + 1;
	}
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans = ans < lis[i] ? lis[i] : ans;

	cout  << ans << endl;

	return 0;
}
