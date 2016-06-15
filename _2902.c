#include<stdio.h>
 
int main()
{
    char word[101];
    gets(word);
    printf("%c", word[0]);
 
    for (int i = 0; word[i] != '\0'; i++)
        if (word[i - 1] == '-')printf("%c", word[i]);
 
    return 0;
}
