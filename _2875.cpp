#include<stdio.h>
int N, M, K;
int main()
{
    scanf("%d %d %d", &N, &M, &K);
 
    int min = N > M ? M : N;
 
    int max = 0;
 
    for (int k = 0; k <= K; k++)
    {
        if (N > k && M > K - k)
        {
            int n = N - k;
            int m = M - (K - k);
            int team = 0;
            while (true)
            {
                n -= 2;
                if (n < 0) break;
                m--;
                if (m < 0) break;
                team++;
            }
 
            max = max > team ? max : team;
        }
        if (N > K - k && M > k)
        {
            int n = N - (K - k);
            int m = M - k;
            int team = 0;
            while (true)
            {
                n -= 2;
                if (n < 0) break;
                m--;
                if (m < 0) break;
                team++;
            }
            max = max > team ? max : team;
        }
    }
     
    printf("%d\n", max);
 
    return 0;
}
