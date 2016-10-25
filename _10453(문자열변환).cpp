#include<string.h>
#include<stdio.h>
using namespace std;
char a[100000 + 1];
char b[100000 + 1];

void swarp(int i, int j)
{
	char tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int solution()
{
	int ans = 0;
	int len_a = strlen(a);
	int len_b = strlen(b);
	if (len_a != len_b)
		return -1;

	for (int i = len_a-1; i > 0; i--)
	{
		if (a[i] != b[i])
		{
			int t = i-1;
			while (t > 0 && a[t] != b[i])
				t--;
					
			for(int k = t; k <= i - 1; k++)
			{
				ans++;
				swarp(k, k + 1);
			}
		}
	}
	return ans;
}

int main()
{
	int TC;
	scanf("%d", &TC);
	while (TC--)
	{
		scanf("%s %s", &a, &b);
		printf("%d\n", solution());
	}
	return 0;
}
