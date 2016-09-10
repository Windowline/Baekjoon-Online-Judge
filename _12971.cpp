#include<iostream>
using namespace std;
int p1, p2, p3, x1, x2, x3;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    cin >> p1 >> p2 >> p3 >> x1 >> x2 >> x3;
    int lcm = (p1*p2) / gcd(p1, p2);
    lcm = (lcm * p3) / gcd(lcm, p3);
    int ans = x1;
    int max = p1;
    if (max < p2)
    {
        max = p2;
        ans = x2;
    }
    if (max < p3)
    {
        max = p3;
        ans = x3;
    }
    bool ansExist = false;
    for (; ans <= lcm; ans += max)
        if (ans%p1 == x1 && ans%p2 == x2 && ans%p3 == x3)
        {
            ansExist = true;
            break;
        }
    if (ansExist)
        cout << ans << endl;
    else
        cout << -1 << endl;
 
    return 0;
}
