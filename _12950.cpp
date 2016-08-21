#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
char g[21][21];
int d[21][21];
int inf = 5555555;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            g[i][j] = '0';
            d[i][j] = inf;
        }
 
    int u, v;
    char c;
    while(m-- >0)
    {
        cin >> u >> v >> c;
        g[u][v] = c;
        g[v][u] = c;
    }
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                d[i][j] = 0;
            else
            {
                if (g[i][j] != '0')
                    d[i][j] = 1;
            }
 
    for(int i=1; i<=n; i++)
        for (int u = 0; u < n; u++)
            for (int v = 0; v < n; v++)
                if (d[u][v] != inf) // u ->v  연결
                    for (int preu = 0; preu < n; preu++)
                        if (g[preu][u] != '0') // preu -> u 연결
                            for (int prev = 0; prev < n; prev++)
                                if (g[prev][v] != '0') // prev --> v 연결
                                    if(g[preu][u]==g[prev][v])
                                        d[preu][prev] = min(d[preu][prev], d[u][v] + 2);
 
    if (d[0][1] < inf)
        cout << d[0][1] << endl;
    else
        cout << -1 << endl;
 
    return 0;
}
