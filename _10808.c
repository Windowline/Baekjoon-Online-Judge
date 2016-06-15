#include<stdio.h>
 
int main()
{
    char word[101];
    gets(word);
    int a['z' + 1] = { 0, };
    for (int i = 0; word[i] != '\0'; i++)
        a[word[i]]++;
    for (int c = 'a'; c <= 'z'; c++)
        printf("%d ", a[c]);
 
    return 0;
}
