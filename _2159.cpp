#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int N, sy, sx;
int des_x[100000];
int des_y[100000];
int mvy[] = {0, -1, 1, 0, 0 };
int mvx[] = {0, 0, 0, -1, 1 };
unsigned long long cache[100000][5];
 
unsigned long long minDist(int des, int p ,int y, int x) // 현 y,x에서 다음 도착지까지 최소 거리
{
    if (des == N-1)
        return 0;
 
    if (cache[des][p] != 0)
        return cache[des][p];
 
    unsigned long long min = minDist(des + 1, 0, des_y[des+1], des_x[des+1]) + abs(des_y[des+1] - y) + abs(des_x[des+1] - x);
    for (int np = 1; np <=4; np++)
    {
        int ny = des_y[des + 1] + mvy[np];
        int nx = des_x[des + 1] + mvx[np];
        if (ny >= 1 && ny <= 100000 && nx >= 1 && nx <= 100000)
        {
            unsigned long long tmp = minDist(des + 1, np, ny, nx);
            tmp += (abs(ny - y) + abs(nx - x));
            min = (min > tmp) ? tmp : min;
        }
    }
    return cache[des][p] = min;
}
 
int main()
{
    scanf("%d", &N);
    scanf("%d %d", &sx, &sy);
    for (int i = 0; i <N; i++)
        scanf("%d %d", des_x+i, des_y+i);
 
    cout << minDist(-1, 0, sy, sx) << endl;
    return 0;
}
