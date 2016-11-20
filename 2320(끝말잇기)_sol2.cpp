#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int N;
string words[17];
bool v[17];
int dp[17];
/*
	사이클이 없다는 점을 이용(같은 단어를 2번 이상 쓸 수 없는 조건)
	사이클이 없으며, 방향 그래프인 상황에서
	최초로 cur에 대한 하위호출에 대한 답을 구하고 캐쉬에 저장했다면
	어떤 경로를 거쳐서 maxDepth(cur)를 다시 호출하게 되어도 캐쉬를 반환해도 상관 X
	ex) 1-->2--cur 이든, 1-->3-->cur이든
	cur에서의 하위 호출은 항상 같은 서브 트리를 구성함
	(사이클이 없다면 어떤 경로로 cur를 왔든 cur 이후에 갈 수 있는 노드는 항상 같음,

	cur에 도달한 방법에 따라 maxDepth(cur)의 하위 호출이 바뀔 수 있다고 가정하면
	일단 방향그래프 이므로 갈 수 없던 길이 새로 생기진 않음, 그럼 갈 수 있었는데 없는 길이 생기는 경우인데

	경우에 따라서 cur에서부터 출발하여 도달하거나 도달할 수 없는 노드 a가 있다고 가정하면
	위 예 기준에서 a-->1 이나 a-->2 이나 a-->3로의 연결이 필요하다. 즉 사이클이 존재하게됨 (1-->cur, 2-->cur, 3--cur로 연결 되어 있으므로)
	
	하지만 문제 조건엔 사이클이 없으므로 호출 도중 1 or 2 or 3으로 돌아갈 수 없음
	때문에 d[cur]는 어떤 경로로 오든 항상 같으므로
	sol1 처럼 d[cur][bit_state]를 운용할 필요가 없음 --> 공간복잡도 N*2^N --> N, 시간복잡도 N*2^N --> N^3
*/
int maxDepth(int cur)
{
	if (dp[cur] != -1) return dp[cur];

	int len = words[cur].length();
	int ans = 0;
	for (int next = 0; next < N; next++)
	{
		if (!v[next] && words[cur][len - 1] == words[next][0])
		{
			v[next] = true;
			int w = words[next].length();
			ans = max(ans, maxDepth(next) + w);
			v[next] = false;
		}
	}
	return dp[cur] = ans;
}


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> words[i];

	int ans = 0;
	for (int s = 0; s < N; s++)
	{
		memset(dp, -1, sizeof(dp));
		v[s] = true;
		int tmp = maxDepth(s) + words[s].length();
		ans = max(ans, tmp);
		v[s] = false;
	}
	cout << ans << '\n';

	return 0;
}
