#include<stdio.h>
int N;
int chess[11][11];
void setting(int y, int x, int v) // y,x에서 x자로 채움/해제
{

	chess[y][x] += v;
	int ty = y + 1;
	int tx = x + 1;
	while (ty<N && tx<N)
	{
		if (chess[ty][tx] != -1)
			chess[ty][tx] += v;
		ty++;
		tx++;
	}
	ty = y - 1;
	tx = x - 1;
	while (ty >= 0 && tx >= 0)
	{
		if (chess[ty][tx] != -1)
			chess[ty][tx] += v;
		ty--;
		tx--;
	}
	ty = y + 1;
	tx = x - 1;
	while (ty<N && tx >= 0)
	{
		if (chess[ty][tx] != -1)
			chess[ty][tx] += v;
		ty++;
		tx--;
	}
	ty = y - 1;
	tx = x + 1;
	while (ty >= 0 && tx<N)
	{
		if (chess[ty][tx] != -1)
			chess[ty][tx] += v;
		ty--;
		tx++;
	}

}

int solve(int idx, int n, int end, int ps_x[], int ps_y[])// idx번째 좌표를 선택/미선택으로 백트래킹
{
	if (idx == end) 
		return n;

	int t1 = 0;
	int t2=0;
	if (chess[ps_y[idx]][ps_x[idx]] == 0) // 이동가능 하면 
	{
		setting(ps_y[idx], ps_x[idx], 1);  // x자로  +1
		t1 = solve(idx + 1, n + 1, end, ps_x, ps_y);
		setting(ps_y[idx], ps_x[idx], -1); //x자로 -1 (0이라면 다시 이동가능해짐)
	}
	t2 = solve(idx + 1, n, end, ps_x, ps_y);
	return (t1 > t2 ? t1 : t2);
}



int main()
{
	scanf("%d", &N);

	int ps_y1[11 * 11];
	int ps_x1[11 * 11];
	int ps_y2[11 * 11];
	int ps_x2[11 * 11];
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i<N; i++)
		for (int j = 0; j<N; j++)
		{
			int t;
			scanf("%d", &t);
			if (t == 0) 
				chess[i][j] = -1; //막아놓은 필드 : -1
			if (t == 1) 
			{
				chess[i][j] = 0; // 이동가능 필드:0, 흑백 필드 나눠서 이동가능한 필드 따로 배열로 저장
				if ((i + j) % 2 == 0) 
				{
					ps_y1[cnt1] = i;
					ps_x1[cnt1] = j;
					cnt1++;
				}

				else if ((i + j) % 2 == 1)
				{
					ps_y2[cnt2] = i;
					ps_x2[cnt2] = j;
					cnt2++;
				}
			}
		}


	printf("%d\n", solve(0, 0, cnt1, ps_x1, ps_y1) + solve(0, 0, cnt2, ps_x2, ps_y2));


	return 0;
}

 
