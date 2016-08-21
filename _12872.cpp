#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
long long mod = 1000000007;
long long cache[101][101][101];
int n, pos, m;
 
long long getCnt(int p, int x, int y) // x들었던노래수 y아직안들은노래수
{
    if (p == pos)
    {
        if (y == 0)
            return 1;
        else
            return 0;
    }
    if (cache[p][x][y] != -1)
        return cache[p][x][y];
 
    long long cnt = 0;
    if (y > 0) //안들었던 노래를 들을 떄
    {
        cnt += getCnt(p + 1, x+1, y-1) * y;
        cnt %= mod;
    }
    if (x > m)
    {
        cnt += getCnt(p + 1, x, y) * (x-m);
        cnt %= mod;
    }
 
    return cache[p][x][y] = cnt;
}
 
 
int main()
{
    cin >> n >> m >> pos;
 
    for (int i = 0; i <= 100; i++)
        for (int j = 0; j <= 100; j++)
            for (int k = 0; k <= 100; k++)
                cache[i][j][k] = -1;
 
    long long ans = getCnt(0, 0, n) % mod;
 
    cout << ans << endl;
 
    return 0;
}
