#include<stdio.h>
int N,K;
int a[10];
int main()
{
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
        scanf("%d", a + i);
             
    int st = N - 1;
    int answer = 0;
    for (int i = N-1; i >= 0;)
    {
        if (a[i] <= K)
        {
            answer += (K / a[i]);
            K = K%a[i];
        }
        else
            i--;
        if (K == 0)
            break;
    }
    printf("%d\n", answer);
    return 0;
}
