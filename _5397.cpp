#include<stdio.h>
#include<iostream>
#include<queue>
#include<string.h>
char st[1000000 + 1];
char st_sup[1000000 + 1];
using namespace std;

void crack(char* s)
{
	int top_sup = -1;
	int top = -1;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '<')
		{
			if (top>-1)
				st_sup[++top_sup] = st[top--];			
		}
		else if (s[i] == '>')
		{
			if (top_sup>-1)
				st[++top] = st_sup[top_sup--];
		}
		else if (s[i] == '-')
		{
			if(top>=0)
				top--;
		}
		else
		{
			st[++top] = s[i];
		}
	}
	for (int i = 0; i <= top; i++)
		cout <<  st[i];
	for (int i = top_sup; i >=0; i--)
		cout << st_sup[i];

	cout << '\n';
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char s[1000000 + 1];
		scanf("%s", s);
		crack(s);
	}
	return 0;
}
