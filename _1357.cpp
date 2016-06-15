#include <stdio.h>
 
int rev(int n)
{
    int ret = 0;
    int t = n;
    int exp = 1;
    while (t > 0)
    {   
        t /= 10;
        exp *= 10;
    }
    while (n > 0)
    {
        ret += ((n % 10) * (exp/10));
        n /= 10;
        exp /= 10;
    }
    return ret;
}
 
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int nx = rev(x);
    int ny = rev(y);
    printf("%d\n", rev(nx + ny));
     
}
