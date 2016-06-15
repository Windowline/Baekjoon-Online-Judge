#include<iostream>
#include<string.h>
using namespace std;
char boom[37];
char stack[1000001];
int top = -1;
char T[1000001];
int main()
{
    cin >> T >> boom;
    int len = strlen(T);
    int len_b = strlen(boom);
    char last = boom[len_b - 1];
    for (int i = 0; i < len; i++)
    {
        stack[++top] = T[i];
        if (stack[top] == last && top+1 >= len_b)
        {
            bool flg = true;
            for (int t = 1; t < len_b; t++)
            {
                if (stack[top - t] != boom[len_b - 1 - t])
                {
                    flg = false;
                    break;
                }
            }
            if (flg)
                top -= len_b;
        }
    }
 
    if (top == -1)
        cout << "FRULA" << endl;
 
    for (int i = 0; i <= top; i++)
        cout << stack[i];
    cout << endl;
 
    return 0;
}
