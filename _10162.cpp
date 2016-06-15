#include<stdio.h>
int abc[] = { 300, 60, 10 };
int cnt[] = { 0, 0, 0 };
int N;
int ns = 0;
int main()
{
    scanf("%d", &N);
    bool pf=false;
 
    if (N < 10) pf = true;
 
    for (int i = 0; i <= 2; i++)
    {
        if (i==0)
        {
            if (N < 10 || N%10!=0)
            {
                pf = true;
                break;
            }
        }
 
        if (N >= abc[i])
        {
            cnt[i] = N / abc[i];
            N = N%abc[i];
        }
    }
 
 
    if (pf)
        printf("-1\n");
    else
    {
        for (int i = 0; i < 3; i++)
            printf("%d ", cnt[i]);
    }
 
    printf("\n");
     
 
    return 0;
}
