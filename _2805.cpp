#include<stdio.h>
#include<iostream>
using namespace std;
unsigned int N, M;
unsigned long long h[1000000];
 
unsigned long long cut(unsigned long long bh)
{
    unsigned long long sum = 0;
    for (unsigned long long i = 0; i < N; i++)
    {
        if (h[i] > bh)
            sum += (h[i] - bh);
    }
    return sum;
}
 
int main()
{
    unsigned long long high = 0;
    unsigned long long low = 0;
 
    cin >> N >> M;
 
    for (int i = 0; i < N; i++)
    {
        scanf("%d", h + i);
        if (high < h[i])
            high = h[i];
     
    }
     
    unsigned long long mid;
    unsigned long long answer = 0;
    //while (high>=low)
    for (int i = 0; i < 100; i++)
    {
        //mid가 커질수록 m이 작아짐
        mid = (high + low) / 2;
        unsigned long long m = cut(mid);
 
        if (m >= M)
        {
            if (answer < mid)
                answer = mid;
            low = mid + 1; // mid를 늘림 -> m을 줄임
        }
        else
            high = mid-1; // mid를 줄임 -> m을 늘림
 
    }
     
    cout << answer;
     
     
 
    return 0;
}
