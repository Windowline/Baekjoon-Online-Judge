#include<iostream>
#include<math.h>
using namespace std;
int inf = 987654321;
int n;
int m[2000 + 1];
int cache[2000+1][2000+1];
 
int getMin(int w1, int w2) // w1: A 마지막 위치, w2: B마지막 위치 
{
    if (w1 == n - 1 || w2 == n - 1)
        return 0;
 
    //printf("dp[%d][%d] : %d\n", w1, w2, cache[w1][w2]);
    if ( w1!= -1 && w2!= -1)
    {
        if (cache[w1][w2] != -2)
            return cache[w1][w2];
    }
 
    int curW = (w1 > w2 ? w1 : w2) + 1; // 현위치
    //printf("%d %d %d\n", curW, w1, w2);
    int ansA = getMin(curW, w2);
    int ansB = getMin(w1, curW);
 
    if(w1!=-1)
        ansA += abs(m[curW] - m[w1]);
     
    if(w2!=-1)
        ansB += + abs(m[curW] - m[w2]);
 
    int ans = ansA > ansB ? ansB : ansA;
 
    if (w1 != -1 && w2 != -1)
        cache[w1][w2] = ans;
 
    return ans;
}
 
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> m[i];
     
    for (int i = 0; i <= 2000; i++)
        for (int j = 0; j <= 2000; j++)
            cache[i][j] = -2;
     
    int subAns1 = getMin(0, -1);
    int subAns2 = getMin(-1, 0);
    int ans = subAns1 > subAns2 ? subAns2 : subAns1;
 
    cout << ans << endl;
     
 
    return 0;
}
