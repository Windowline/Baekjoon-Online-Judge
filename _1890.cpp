#include<iostream>
#define ULL unsigned long long
using namespace std;
int N;
int F[101][101];
ULL dp[101][101];
 
ULL cnt(int y, int x)
{
    if (y == N && x == N)
        return 1;
    if (y > N || x > N)
        return 0;
 
    if (dp[y][x] != -1)
        return dp[y][x];
    if (F[y][x] == 0)
        return 0;
 
    ULL ans = 0;
    if (y + F[y][x] <= N)
        ans += cnt(y + F[y][x], x);
 
    if (x + F[y][x] <= N)
        ans += cnt(y, x + F[y][x]);
 
    return dp[y][x] = ans;
}
 
int main()
{
    cin >> N;
    for (int y = 1; y <= N; y++)
        for (int x = 1; x <= N; x++)
        {
            cin >> F[y][x];
            dp[y][x] = -1;
        }
    cout << cnt(1, 1)<< endl;
 
    return 0;
}
