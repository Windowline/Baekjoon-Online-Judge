#include<stdio.h>
 
int N, M;
 
int *aN;
int *aM;
 
int solve()
{
    int ans = 0;
    int next = 0;
    int j;
    for (int i = 0; i<N; i++)
    {
        for (j = next; j<M;)
        {
            if (aN[i] == aM[j])
            {
                ans++;
                next = j + 1;
                break;
            }
            else if (aN[i] < aM[j])
                break;
 
            else if (aN[i] > aM[j])
                j++;
        }
        if (j == M - 1) return ans;
    }
    return ans;
}
 
int main()
{
    while (1)
    {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) break;
 
        aN = new int[N + 1];
        aM = new int[M + 1];
 
        for (int i = 0; i < N; i++)
            scanf("%d", &aN[i]);
 
        for (int i = 0; i < M; i++)
            scanf("%d", &aM[i]);
 
        printf("%d\n", solve());
    }
 
    return 0;
}
