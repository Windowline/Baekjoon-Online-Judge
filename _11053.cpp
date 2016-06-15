#include<stdio.h>
#define MAX(X,Y) ((X) > (Y)) ?(X) : (Y)
int N;
int arr[1001];
int maxL[1001];
int maxLen[1001][1001];
 
void solve2()
{
    //maxL[i] : 1~i까지 최장 길이
    // --> maxL[i] = MAX(max[j]) +1 단, j < i && arr_j < arr_i
    for (int e = 1; e <= N; e++)
    {
        maxL[e] = 1;
        for (int j = 1; j <= e - 1; j++)
            if (arr[j] < arr[e] && maxL[e] < maxL[j] + 1)
                maxL[e] = maxL[j] + 1;
    }
    int answer = 0;
    for (int i = 1; i <= N; i++)
        answer = MAX(answer, maxL[i]);
    printf("%d\n", answer);
}
 
/*
void solve() // 오답... 왜?
{   //maxLen[s][e] : s가 첫항일 때, e까지 고려했을 때 최장길이
    int curMax;
    for (int s = 1; s <= N; s++) //시작점
    {
        maxLen[s][s] = 1;
        curMax = arr[s];
        for (int e = s+1; e <= N; e++) //끝점
        {
            if (curMax < arr[e])
            {
                maxLen[s][e] = maxLen[s][e - 1] + 1;
                curMax = arr[e];
            }
            else
                maxLen[s][e] = maxLen[s][e - 1];
        } 
    }
    int answer = 0;
    for (int i = 1; i <= N; i++)
        answer = MAX(answer, maxLen[i][N]);
    printf("%d\n", answer);
}
*/
int main()
{
    scanf("%d", &N);
    for (int i = 1; i <=N; i++)
        scanf("%d", arr + i);
 
    solve2();
    return 0;
}
