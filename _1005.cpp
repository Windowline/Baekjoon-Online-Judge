#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
int w_time[1000 + 1];
int pre_cnt[1000 + 1];
int e_time[1000 + 1];
int t, w, r, before, after, target;
vector<int> w_next[1000 + 1];

void top_sort()
{
	queue<int> Q;
	for(int i=1; i<=w; i++)
		if (pre_cnt[i] == 0)
		{
			Q.push(i);
			e_time[i] = w_time[i];
		}
	while (!Q.empty())
	{
		int cur = Q.front();
		Q.pop();
		for (int next : w_next[cur])
		{
			--pre_cnt[next];
			e_time[next] = max(e_time[next], e_time[cur] + w_time[next]);
			if (pre_cnt[next] == 0)
			{
				if (next == target)
				{
					cout  <<  e_time[next] << endl;
					return;
				}
				Q.push(next);
			}
		}
	}
}

int main()
{
	cin >> t;
	while (t--)
	{
		memset(w_time, 0, sizeof(w_time));
		memset(e_time, 0, sizeof(e_time));
		memset(pre_cnt, 0, sizeof(pre_cnt));
		for (int i = 0; i <= 1000; i++)
			w_next[i].clear();
		cin >> w >> r;
		for (int i = 1; i <= w; i++)
			cin >> w_time[i];
		while (r--)
		{
			cin >> before >> after;
			pre_cnt[after]++;
			w_next[before].push_back(after);
		}
		cin >> target;
		top_sort();
	}

	return 0;
}
