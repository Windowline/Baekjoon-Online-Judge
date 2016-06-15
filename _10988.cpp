#include<stdio.h>
 
int main()
{
    char str[100];
    gets(str);
    int len;
    for (len = 0; str[len] != '\0'; len++){}
 
    int answer = 1;
    for (int i = 0; i < len; i++)
    {
        if (str[len-1 - i] != str[i])
        {
            answer = 0;
            break;
        }
    }
    printf("%d\n", answer);
    return 0;
}
