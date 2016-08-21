#include<iostream>
using namespace std;
int n;
float num[5000 + 1];
int cost[5000 + 1];
int d[5000 + 1];
int main()
{
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
        sum += cost[i];
    }
 
    int max = d[0] = cost[0]; // d[i]: i로 끝나는 오름차순 수열의 코스트 합
     
    for (int i = 1; i < n; i++)
    {
        d[i] = cost[i];
        for (int j = 0; j < i; j++)
        {
            if (num[j] <= num[i] && d[i] < d[j] + cost[i])
            {
                d[i] = d[j] + cost[i];
            }
        }
        max = max < d[i] ? d[i] : max;
    }
    cout << (sum - max) << endl;
 
    return 0;
}
