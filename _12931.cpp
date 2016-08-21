#include<iostream>
using namespace std;
int n;
int b[51];
 
 
int main()
{
    int cntZero = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
            cntZero++;
    }
 
    int ans = 0;
 
    while (1)
    {
        int one = 0;
        for (int i = 0; i < n; i++)
            if (b[i] == 1) // 1을 지우기 연산으로 밖엔 못줄임
            {
                ans++;
                b[i]=0;
            }
         //1이 하나도 없었다면 요소가 짝인지 홀인지 검사
         
            int max = 0;
            int maxI = -1;
 
            bool flg = true;
            for (int i = 0; i < n; i++)
            {
                if (b[i] % 2 != 0)
                {
                    flg = false;
                    if (max < b[i])
                    {
                        max = b[i];
                        maxI = i;
                    }
                }
 
            }
            if (flg) //모두 짝수
            {
                for (int i = 0; i < n; i++)
                    b[i] /= 2;
                ans++;
            }
            else //홀수 섞임
            {
                b[maxI]--;
                ans++;
            }
        //check
            bool flg2 = true;
            for (int i = 0; i < n; i++)
                if (b[i] != 0)
                {
                    flg2= false;
                    break;
                }
            if (flg2)
                break;
    }
 
    cout << ans-1 << endl;
 
    return 0;
}
