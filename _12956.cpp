#include<iostream>
#include<stdio.h>
using namespace std;
int n, m;
int grp[101][101];
int d[101][101];
int tmp[101][101];
int inf = 987654321;
int uA[2001];
int vA[2001];
int main()
{
    cin >> n >> m;
    int u, v, c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            tmp[i][j] = d[i][j] = grp[i][j] = inf;
 
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> c;
        tmp[u][v] = d[u][v] = grp[u][v] = c;
        tmp[v][u] = d[v][u] = grp[v][u] = c;
         
        uA[i] = u;
        vA[i] = v;
    }
 
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
     
    for (int i = 0; i < m; i++)
    {
        int ans = 0;
        tmp[uA[i]][vA[i]] = inf;
        tmp[vA[i]][uA[i]] = inf;
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    if (tmp[i][j] > tmp[i][k] + tmp[k][j])
                        tmp[i][j] = tmp[i][k] + tmp[k][j];
 
                    if (i!=j && k == n - 1 && d[i][j] < tmp[i][j])       
                        ans++;      
                }
 
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                tmp[i][j] = grp[i][j];
 
        printf("%d ", ans / 2);
    }
    cout << endl;
 
    return 0;
}
