//https://www.acmicpc.net/problem/1182
#include<stdio.h>
int N, S;
int arr[20];
int answer = 0;

void makeSet(int idx, int curSum ,int setCnt)
{	
	if (idx == N-1)
	{
		if (curSum == S && setCnt>0) // 공집합의 경우는 빼야하므로 subSet의 길이가 필요
			answer++;
		return;
	}
	makeSet(idx + 1, curSum + arr[idx+1], setCnt+1);
	makeSet(idx + 1, curSum, setCnt);
}

int main()
{
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);
	makeSet(-1, 0, 0);
	printf("%d\n", answer);

	return 0;
}
