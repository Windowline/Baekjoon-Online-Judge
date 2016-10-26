#include<string.h>
#include<stdio.h>
int N;
char s[51][51];
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%s", s[i]);

	char ret[51];
	int len = strlen(s[0]);

	for (int c = 0; c < len; c++)
	{
		char t = s[0][c];
		int m = 1;
		for (int i = 1; i < N; i++)
		{
			if (t != s[i][c])
			{
				m = -1;
				break;
			}
		}
		if (m==1)
			ret[c] = t;
		else
			ret[c] = '?';
	}

	ret[len] = '\0';


	printf("%s\n", ret);

	return 0;
}
