#include<iostream>
using namespace std;
unsigned long long f[100];
unsigned long long N;
bool answer = false;

void csearch(int idx, unsigned long long v, int end)
{
	if (idx > end)
		return;
	if (answer == true)
		return;

	if (v == N)
	{
		answer = true;
		return;
	}

	csearch(idx + 1, v + f[idx+1], end);
	csearch(idx + 1, v, end);
	
}

int main()
{
		cin >> N;

		if (N == 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			f[0] = 1;
			f[1] = 1;
			int i = 2;
			while (true)
			{
				f[i] = f[i - 1] * i;
				if (f[i] > N)
					break;
				i++;
			}
			answer = false;
			csearch(-1, 0, i - 1);
			if (answer == true)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	return 0;
}
