#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[501] = { 0, };
int dp[501] = { 0, };
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cin >> a[j];
        for (int j = i; j >= 1; j--)
            dp[j] = max(dp[j - 1], dp[j]) + a[j];
    }
    int ans = -1;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans << endl;
    return 0;
}
