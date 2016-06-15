#include<stdio.h>
 
int main()
{
    int sum = 0;
    int t;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &t);
        sum += (t >= 40) ? t : 40;
    }
    printf("%d\n", sum/5);
 
    return 0;
}
