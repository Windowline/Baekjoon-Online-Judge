#include<stdio.h>
#include<iostream>

using namespace std;

int N,val;
int arr[100];
unsigned long long cache[101][21];

unsigned long long solve(int idx, int v)
{
	if (v < 0 || v > 20)
		return 0;
	if (idx == N - 1)
	{

		if (v == val)
			return 1;		
		else
			return 0;
	}
	if (cache[idx][v] != -1)
		return cache[idx][v];
	unsigned long long v1 = solve(idx + 1, v + arr[idx]);
	unsigned long long v2 = solve(idx + 1, v - arr[idx]);

	return cache[idx][v]= v1 + v2;
}

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N-1; i++)
		scanf("%1d", arr + i);

	scanf("%d", &val);

	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 21; j++)
			cache[i][j] = -1;
	
	cout << solve(1, arr[0]) << endl;
	return 0;
}
