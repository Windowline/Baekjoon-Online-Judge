#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int N;
string words[17];
int dp[17][1 << 17];
int solve();
int maxDepth(int, int);
int solve()
{
    int ans = 0;
    for (int s = 0; s < N; s++)
    {
        memset(dp, -1, sizeof(dp));
        int tmp = maxDepth(s, (1<<s)) + words[s].length();
        ans = max(ans, tmp);
    }
 
    return ans;
}
int maxDepth(int cur, int state)
{
    if (dp[cur][state] != -1) // d:  현재 cur이고 v_state 상태일 때 최대 깊이
        return dp[cur][state];
 
    int ans = 0;
    int len = words[cur].length();
    for (int next = 0; next < N; next++)
    {
        if( (state&(1 << next))==0 && words[cur][len-1]==words[next][0])
        {
            int w = words[next].length();
            ans = max(ans, maxDepth(next, state|(1<<next)) + w);
        }
    }
     
    return dp[cur][state] = ans ;
}
int main()
{
    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++)
        cin >> words[i];
 
    cout << solve() << endl;
 
    return 0;
}
