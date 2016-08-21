#include<iostream>
#include<string>
using namespace std;
bool f[10001];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'Y')
            f[i+1] = true;
        else
            f[i+1] = false;
    }
 
    int ans = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        if (f[i])
        {
            ans++;
            for (int j = i; j <= s.length(); j += i)
                f[j] = !f[j];
        }
    }
    for (int i = 1; i <= s.length(); i++)
        if (f[i])
            ans = -1;
 
    cout << ans << endl;
 
    return 0;
}
