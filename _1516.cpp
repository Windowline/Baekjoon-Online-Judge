#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n;
int w_time[10000 + 1];
int pre_cnt[10000 + 1];
int end_time[10000 + 1]; 
vector<int> next_work[10000 + 1];
void top_sort()
{
	queue<int> Q;
	for(int i=1; i<=n; i++)
		if (pre_cnt[i] == 0)
		{
			Q.push(i);
			end_time[i] = w_time[i];
		}

	while (!Q.empty())
	{
		int cur = Q.front();
		Q.pop();
		for (int next : next_work[cur])
		{
			--pre_cnt[next];
			if (end_time[next] < end_time[cur] + w_time[next])
				end_time[next] = end_time[cur] + w_time[next];
			if(pre_cnt[next]== 0) // next번째 선행모두종료
				Q.push(next);		
		}
	}
}
int main()
{
	int t, ind_n, pre;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		w_time[i] = t;
		while(1)
		{
			cin >> pre;
			if (pre == -1)
				break;
			pre_cnt[i]++;
			next_work[pre].push_back(i);
		}
	}
	top_sort();
	for (int i = 1; i <= n; i++)
		cout << end_time[i] << endl;

	return 0;
}
