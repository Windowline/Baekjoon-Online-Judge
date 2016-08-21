#include<iostream>
#include<math.h>
using namespace std;
int n;
int cnt[41]; //0,  1 or 2
 
int main()
{
    int t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cnt[t]++;
    }
 
    bool isPossible = true;
    long long ans = 0;
    if (cnt[0]<=0 || cnt[0]>2)
        isPossible = false;
    for (int i = 1; i<41; i++)
    {
        if (cnt[i] >= 3 || cnt[i - 1] < cnt[i])
        {
            isPossible = false;
            break;
        }
    }
 
    if (isPossible)
        ans++;
    for (int i = 0; cnt[i] > 0; i++)
    {
            ans *= 2;
            if (cnt[i] == 1)
                break;
    }
 
    cout << ans << endl;
 
    return 0;
}
