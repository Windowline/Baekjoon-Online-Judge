#include<stdio.h>
int cnt[10001];
int main()
{
    int N,t;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &t);
        cnt[t]++;
    }
    for (int i = 1; i <= 10000; i++)
    {
        if (cnt[i] != 0)
            for (int c = 1; c <= cnt[i]; c++)
                printf("%d\n", i);
    }
    printf("\n");
    return 0;
}
