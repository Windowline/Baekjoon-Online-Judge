#include<iostream>
using namespace std;
 
int n;
int cnt[51];
int d[51];
long sum = 0;
int main()
{
    int brd;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cin >> brd;
        cnt[brd]++;
    }
    sum = d[1] = cnt[1];
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] * cnt[i];
        sum += d[i];
    }
    cout << sum << endl;
 
    return 0;
}
