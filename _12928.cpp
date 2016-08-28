#include <iostream>
using namespace std;
int n, s;
bool dp[51][51][1001] = { false, }; // d[현노드수][리프노드수][s의 수]

bool solve(int node, int leaf, int s)
{
	if (dp[node][leaf][s])
		return true;
	dp[node][leaf][s] = true;
	for (int i = 1; node+i <=n; i++) //[node][leaf][s]가 가능하면 -> [node+i][leaf-1+i][s+i+i*(i-1)/2]가 모두 가능
		solve(node+i, leaf-1+i, s+i+i*(i-1)/2);
}


int main()
{
	cin >> n >> s;

	dp[1][1][0] = true;
	for (int i = 1; i <= n - 1; i++)
		solve(1 + i, 1 - 1 + i, i*(i-1)/2); // 초기엔 + i 없음
	

	int ans = 0;
	for(int i=0; i<=n; i++)
		if (dp[n][i][s])
		{
			ans = 1;
			break;
		}

	cout << ans << endl;

	return 0;
}
