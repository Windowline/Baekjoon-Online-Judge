#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
char s[301];
int dp[301][301];
int len, m;
 
int minTrans(int i, int j)
{
    int x, y;
    x = y = 0;
    for (int k = i; k <= j; k++)
    {
        if (s[k] == 'U') y++;
        else if (s[k] == 'D') y--;
        else if (s[k] == 'R') x++;
        else if (s[k] == 'L') x--;
    }
    x = abs(x);
    y = abs(y);
 
    if ( (x + y) % 2 != 0)
        return -1;
    else
        return (x + y) / 2;
}
 
int maxCnt(int i, int k)// i부터시작하여 현재 k번연산가능할 때
{   
    //cout << "dp [ " << i << ", " << k << " ]" << endl;
    if (i >= len)
        return 0;
    /*
    int &ans = dp[i][k];
    if (ans != -1)
        return ans;
    */
    if (dp[i][k] != -1)
        return dp[i][k];
    int ans = 0;
    for (int j = i;  j < len; j++)
    {
        int minVal = minTrans(i, j);
        if (minVal != -1 && minVal <= k)
            ans = max(ans, maxCnt(j + 1, k - minVal) + 1);
    }
 
    return dp[i][k] = ans;
}
 
int main()
{
    cin >> s;
    cin >> m;
    len = strlen(s);
    memset(dp, -1, sizeof(dp));
 
    cout << maxCnt(0, m) << endl;
    return 0;
}
