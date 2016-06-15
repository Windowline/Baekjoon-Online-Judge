#include<stdio.h>
 
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int p = 0;
    int q = 0;
 
    int t = A;
    int exp = 1;
    while (t > 0)
    {
        if (t % 10 == 5)
            p += exp;
        if (t % 10 == 6)
            q += exp;
        t /= 10;
        exp *= 10;
    }
 
     t = B;
     exp = 1;
    while (t > 0)
    {
        if (t % 10 == 5)
            p += exp;
        if (t % 10 == 6)
            q += exp;
        t /= 10;
        exp *= 10;
    }
 
    printf("%d %d\n", A + B - q, A + B + p);
 
    return 0;
}
