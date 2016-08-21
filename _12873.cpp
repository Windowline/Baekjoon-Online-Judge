#include<iostream>
#include<vector>
using namespace std;
int n;
int main()
{
    cin >> n;
    vector <int> a(n);
    for (int i = 1; i <= n; i++)
        a[i - 1] = i;
 
    auto pp = a.begin();
    for (int i = 1; i <= n - 1; i++)
    {
        int p = ((long long)i*i*i - 1) % a.size();
        for (int j = 1; j <= p; j++)
        {
            pp++;
            if (pp == a.end())
                pp = a.begin();
        }
        pp = a.erase(pp);
        if (pp == a.end())
            pp = a.begin();
    }
    cout << a[0] << endl;
 
    return 0;
}
