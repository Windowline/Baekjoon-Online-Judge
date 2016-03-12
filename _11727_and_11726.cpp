#include<stdio.h>
//하향식
//타일 2 https://www.acmicpc.net/problem/11727
int N;
int T[1001];
int Tiles(int n)
{
	if (n == 0 || n == 1) return 1;
	if (T[n] != 0) return T[n];
	int cnt1 = Tiles(n - 1); //1X2로 채운경우
	int cnt2 = Tiles(n - 2) * 2; // 2X2, 2X1로 채운경우는 같다
	return T[n] = (cnt1 + cnt2)%10007;
}

int main()
{
	scanf("%d", &N);
	printf("%d\n", Tiles(N));
	return 0;
}


/* 타일 1 :상향식  
https://www.acmicpc.net/problem/11726 
int N;
int T[1001];

int main()
{
	scanf("%d", &N);
	T[0] = 1;
	T[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		T[i] = T[i - 1] + T[i - 2];
		T[i] %= 10007;
	}
	printf("%d\n", T[N]);

	return 0;
}
*/
