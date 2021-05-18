#include<stdio.h>
//t1
//t2
//t3
int main()
{
    int sum = 0;
    int min = 101;
    for (int i = 0; i < 7; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 1)
        {
            sum += n;
            if (min > n)
                min = n;
        }
    }
    if (sum == 0)
        printf("-1\n");
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
 
}
