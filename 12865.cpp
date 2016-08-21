#include<iostream>
using namespace std;
int a[101]; 
int b[101]; 
int n, maxW;
//int cache[101][100000 + 1];
int d[100000 + 1];
 
/* 캐쉬에서 메모리초과
int maxVal(int i, int w)
{
    if (i >= n)
        return 0;
    if (cache[i][w] != -1)
        return cache[i][w];
 
    int sub1 = 0;
    if(w-a[i]>=0)
        sub1 += maxVal(i + 1, w - a[i]) + b[i];
    int sub2 = maxVal(i + 1, w);
 
    return cache[i][w] = sub1 > sub2 ? sub1 : sub2;
}
*/
 
int main()
{   
    cin >> n >> maxW; 
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i]; // a무게  b가치
     
    //d[i][w] --> 0~i번째 물건까지만을 고려시 w로 채울 수 있는 최대 가치 --> 1차원배열에 기록 가능 , d[w]
    for (int i = 0; i < n; i++)
        for (int w = maxW; w>=a[i]; w--)
            if (d[w] < d[w - a[i]] + b[i])
                    d[w] = d[w - a[i]] + b[i];
     
    //for (int w = 0; w <= maxW; w++)
    //  cout << w << " " << d[w] << endl;
    cout << d[maxW] << endl;
    return 0;
}
