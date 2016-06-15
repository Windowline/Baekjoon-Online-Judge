#include<stdio.h>
int N;
int DP[100001];
int main()
{
    scanf("%d", &N);
 
    for (int i = 1; i <= N; i++)
    {
        DP[i] = i;
        for (int j = 1; j*j <= i; j++)
            if (DP[i - j*j] + 1 < DP[i])
                DP[i] = DP[i - j*j]+1;
    }
    printf("%d\n", DP[N]);
    return 0;
}
