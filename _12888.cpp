#include<iostream>
using namespace std;
int main()
{
    long long d[61];
    d[0] = 1;
    d[1] = 1;
    int h;
    cin >> h;
    for (int i = 2; i <= h; i++)
        d[i] = d[i - 1] + 2 * d[i - 2];
     
    cout << d[h] << endl;
 
    return 0;
}
