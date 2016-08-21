#include<stdio.h>
 
int main()
{
    int r, c, k;
    scanf("%d %d %d", &r, &c, &k);
     
    int ans = 0;
    if (k == 1)
        ans = 1;
    else
    {
        if (r*c % 2 == 0)
            ans = 1;
        else
            ans = 0;
    }
     
    printf("%d\n", ans);
 
    return 0;
}
