#include<stdio.h>
//https://www.acmicpc.net/problem/6588
int main()
{	
	int a, b;
	int N;
	bool isGoldB;
	while (true)
	{
		scanf("%d", &N);
		if (N == 0)
			break;
		bool isGoldB = false;
		for (a = 3; a <= N - 1; a += 2)
		{		
			bool isPrime = true;
			for (int t = 2; t*t <= a; t++)
			{
				if (a%t == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				b = N - a;
				if (b % 2 == 0 || b==1) continue;
				for (int t = 2; t*t <= b; t++)
				{
					if (b%t == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime)
				{
					isGoldB = true;
					printf("%d = %d + %d\n", N, a, b);
					break;
				}
			}
		}
		if (!isGoldB)
			printf("Goldbach's conjecture is wrong.\n");
	}


	return 0;
}
