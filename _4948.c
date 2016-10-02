#include<stdio.h>
int main()
{
	int t;
	while(1)
	{
		scanf("%d", &t);
		if (t == 0)
			return 0;
		int cnt = 0;
		for (int i = t+1; i<=2*t; i++)
		{
			int isP = 1;
			for(int j=2; j*j<=i; j++)
				if (i%j == 0)
				{
					isP = -1;
					break;
				}
			if (isP==1) cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}
