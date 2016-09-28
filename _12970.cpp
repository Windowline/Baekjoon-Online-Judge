#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, k;

int main()
{
	cin >> n >> k;

	for (int a = 0; a <= n; a++)
	{
		int b = n - a;
		if (k > a*b)
			continue;		
		vector<int> combCnt(a + 1); //i에 b를 배치할 시 생겨나는 조합수

		for(int i=0; i<b; i++)
		{
			int inputPos = min(a, k);
			combCnt[inputPos]++;
			k -= inputPos; //증가한 조합수만큼 
		}
		for (int i = 0; i <= a; i++)
		{
			for (int bcnt = 0; bcnt <combCnt[i]; bcnt++)
				cout << 'B';
			if(i < a)
				cout << 'A';
		}
		cout << endl;
		return 0;
	}

	cout << -1 << endl;
	return 0;
}
