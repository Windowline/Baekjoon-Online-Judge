#include<iostream>
#include<string>
using namespace std;
string str;
bool check(int s, int len)
{
    int l = s;
    int r = len - 1;
    while (l <= r)
        if (str[l++] != str[r--])
            return false;
    return true;
}
 
int main()
{
    cin >> str;
 
    int len = str.length();
    for (int s = 0; s < len; s++)
    {
        if (check(s, len))
        {
            cout << len + s << endl;
            return 0;
        }
    }
 
 
    return 0;
}
