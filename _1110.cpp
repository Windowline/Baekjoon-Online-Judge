#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);    
    int cycle = 0;
    int newNum = n;
    while (true)
    {
        cycle++;
        int tmp;
        if (newNum < 10)
            tmp = newNum;
        else
            tmp = (newNum % 10) + ((newNum / 10) % 10);
        newNum = (newNum % 10)*10 + (tmp % 10);
        if (newNum == n)
            break;
    }
    printf("%d\n", cycle);
}
