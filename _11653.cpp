#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	while (n > 1)
	{	
		bool isDiv = false;
		for (int i = 2; i*i <= n; i++)
		{
			if (n%i == 0)
			{
				printf("%d\n", i);
				n /= i;
				isDiv = true;
				break;
			}
		}
		if (!isDiv)
		{
			printf("%d\n", n);
			break;
		}
	}

	return 0;
}
