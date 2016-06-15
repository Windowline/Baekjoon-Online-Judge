#include<stdio.h>
int arr[1000];
int N;
int dp_up[1000];
int dp_dw[1000];

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", arr+i);
	
	dp_up[0] = 1;
	for (int e = 1; e < N; e++)
	{
		dp_up[e] = 1;
		for (int j = 0; j < e; j++)
			if (arr[j] < arr[e] && dp_up[e] < dp_up[j] + 1) 
				dp_up[e] = dp_up[j] + 1;			
	}

	dp_dw[N - 1] = 1;
	for (int e = N - 2; e >= 0; e--)
	{
		dp_dw[e] = 1;
		for (int j = N - 1; j > e; j--)
			if (arr[j] < arr[e] && dp_dw[e] < dp_dw[j] + 1)
				dp_dw[e] = dp_dw[j] + 1;
	}

	int answer = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp = dp_up[i] + dp_dw[i] - 1;
		answer = answer < tmp ? tmp : answer;
	}

	printf("%d\n", answer);
	

	return 0;
}
