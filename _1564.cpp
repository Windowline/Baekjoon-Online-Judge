#include<iostream>
using namespace std;
int n, k;
unsigned long long lines[10000 + 1];
int main()
{
	cin >> k >> n;

	for (int i = 0; i < k; i++)
		cin >> lines[i];

	unsigned long long l = 1;
	unsigned long long h = 1;
	h = (h << 63) - 1 ;
	unsigned long long answer = 0;

	while (l <= h)
	{
		long long m = (l + h) / 2;

		//cout << h <<" " << l << endl;

		long long cnt = 0;
		for (int i = 0; i < k; i++)
			cnt += (lines[i] / m);

		if (cnt < n) // 더 작게 잘라야
			h = m-1;
		else if (cnt >= n) //더 크게
		{
			l = m + 1;
			answer = answer < m ? m : answer;
		}
	}
	
	cout << answer << endl;

	return 0;
}
