#include<stdio.h>
#define MAX(X,Y) ((X) > (Y)) ? (X) : (Y)
int N;
int drink[10001];
int n[10001];
/*
int cache[2][10001];
 
int maxDrink(int cnt, int n)
{
    if (n == 1)
    {
        if (cnt == 2)
            return 0;
        else
            return drink[1];
    }
    if (cache[cnt][n] != 0)
        return cache[cnt][n];
 
    if (cnt == 2)
        return cache[cnt][n] = maxDrink(0, n - 1);
    else
    {
        int max = maxDrink(cnt + 1, n - 1) + drink[n]; //  n 먹
        max = MAX(max, maxDrink(cnt, n - 1));// n안먹 
        return cache[cnt][n] = max;
    }
}
*/
void maxDrink2()
{
    n[1] = drink[1];
    n[2] = drink[1] + drink[2];
    for (int i = 3; i <= N; i++)
    {
        int max = n[i - 1]; // n이 0번 연속한 경우
        max = MAX(max, n[i - 2] + drink[i]); //  n이 1번 연속한 경우
        max = MAX(max, n[i - 3] + drink[i] + drink[i - 1]); //n이 2번 연속
        n[i] = max;
    }
    printf("%d\n", n[N]);
}
 
int main()
{
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", drink + i);
 
    maxDrink2();
    return 0;
}
