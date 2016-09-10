#include<iostream>
using namespace std;
int n;
int a[10000 + 1];
 
void swarp(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
     
    int i=0;
    int index = -1;
    while (i < n-1)
    {
        if (a[i] > a[i + 1])
            index = i + 1;
        i++;
    }
    if (index == -1)
    {
        cout << -1 << endl;
        return 0;
    }
    int maxi = -1;
    for (int s = index; s < n; s++)
    {
        if (a[s] < a[index - 1])
            maxi = s;
    }
    //cout << "swarp " << a[index - 1] << " and " << a[maxi] << endl;
    swarp(a[index - 1], a[maxi]);
    int l = index;
    int r = n - 1;
    while (l <= r)
        swarp(a[l++], a[r--]);
 
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}
