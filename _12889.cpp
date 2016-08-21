#include<iostream>
#include<string>
using namespace std;
 
bool check(string &s)
{
    for (int i = 1; i <s.length(); i++)
    {
        string front = s.substr(0, i);
        string back = s.substr(i, s.length());
        if (front >= back)
            return false;
    }
    return true;
}
 
string solve(string &s)
{
    int len = s.length();
    for (int i = len-1; i >= 0; i--) // 뒤에서부터
    {
        string ret;
        if (s[i] == '0') // 뒤에서 먼저 만나는 0에 대해 그 아래로 모두 1로 바꿈
        {
            ret = s;
            for (int j = i; j < len; j++)
                ret[j] = '1';
 
            if (check(ret)) // 가능한 많이 0으로 바꾼다.
            {
                for (int j = i + 1; j < len; j++)
                {
                    ret[j] = '0';
                    if (!check(ret))
                        ret[j] = '1';
                }
                return ret;
            }
        }
    }
 
    return "-1";
}
 
 
int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
 
    return 0;
}
