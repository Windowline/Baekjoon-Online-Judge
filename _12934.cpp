#include<iostream>
using namespace std;
long long x, y;
int main()
{
    cin >> x >> y;
    long long n;
    for (n = 1; n*(n + 1) <= (x + y) * 2; n++) {}
    n--;
    if (n*(n+1) != 2 * (x + y))
    {
        cout << -1 << endl;
        return 0;
    }
    //cout << "n: " << n << endl;
 
    long long min = 0; // 1~n개의 숫자 중 n_use개 사용해서 만들 수 있는 가장 작은 수
    long long max = 0; 
    for (long long use = 0; use <= n; use++) // 수를 use개를 사용할 때 min=sum(1~use)~max=sum(n~ n-use+1)사이의 모든 수를 얻을 수 있음 
    {
        if (min <= x && max >= x)
        {
            cout << use << endl;
            return 0;
        }
        min += (use + 1);
        max += (n - use);
    }
 
    cout << -1 << endl;
 
    return 0;
}
