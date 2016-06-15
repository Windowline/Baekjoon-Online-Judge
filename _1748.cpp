#include<stdio.h>
int N;
long long nums[15]; // i번쨰 자릿수까지의 모든 수 합
long long lasts[15]; //i번쨰 자릿수 마지막
int main()
{
    scanf("%d", &N);
    nums[0] = 0;
    lasts[0] = 0;
    long long j = 9;
    int start = 0;
    for (int i = 1; i <= 15; i++, j *= 10) // i번째 자릿수
    {
        nums[i] = nums[i-1] + (i * j);
        lasts[i] = lasts[i - 1] + j;
        if (lasts[i] > N)
        {
            start = i - 1;
            break;
        }
    }
    int t1= nums[start];
    int t2 = (N - lasts[start])*(start+1); 
    //t만큼 start+1자릿수가 있다.
     
    printf("%d\n", t1+t2);
 
 
    return 0;
}
