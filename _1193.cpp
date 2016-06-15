#include<algorithm>
#include<stdio.h>
 
void solve(int nn)
{
    if (nn == 1)
    {
        printf("1/1\n");
        return;
    }
    int y = 1;
    int x = 1;
    int n = 1;
    int i = 0;
    int isUp = -1;
    while (true)
    {
        i++;
        if (isUp == -1)
        {
            x++;
            n++;
            if (n == nn)
            {
                printf("%d/%d\n", y, x);
                return;
            }
            while (x > 1)
            {
                x--;
                y++;
                n++;
                if (n == nn)
                {
                    printf("%d/%d\n", y, x);
                    return;
                }
            }
            isUp = isUp*(-1);
        }
        else if (isUp==1)
        {
            y++;
            n++;
            if (n == nn)
            {
                printf("%d/%d\n", y, x);
                return;
            }
            while (y >1)
            {
                x++;
                y--;
                n++;
                if (n == nn)
                {
                    printf("%d/%d\n", y, x);
                    return;
                }
            }
            isUp = isUp*(-1);
        }
    }
}
 
 
int main()
{
    int N;
    scanf("%d", &N);
 
//  for (int t = 1; t <= 20; t++)
//  {
        //printf("%d: ", t);
        solve(N);
//  }
    return 0;
}
