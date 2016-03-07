//https://www.acmicpc.net/problem/1644

#include<stdio.h>
#define MAX 4000000
int N;
int primes[MAX+1];
int main()
{
	scanf("%d", &N);

	//Setting PrimeNumber Table
	int primeCnt = 0;
	for (int n = 2; n<=N; n++)
	{
		bool isPrime = true;
		for (int i = 2; i*i <= n; i++)
			if (n%i == 0)
			{
				isPrime = false;
				break;
			}
		if (isPrime)
			primes[primeCnt++] = n;
	}
	
	//Solve
	int answer = 0;
	int start = 0;
	int end = -1;
	int sum = 0;
	while (start < primeCnt && end < primeCnt)
	{
		if (sum == N)
		{
			answer++;
			sum -= primes[start++];
			sum += primes[++end];
		}
		else if (sum < N)
			sum += primes[++end];

		else if (sum > N)
			sum -= primes[start++];		
	}
	
	printf("%d", answer);
}
