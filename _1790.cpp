#include<stdio.h>
long long int sum[100]; // sum[i] : i번쨰 자릿수 마지막 오프셋
long long int d[100]; //9, 99, 999
long long int N, K;
 
long long int getLen();
void solve();
 
long long int getLen()
{
    long long int len = 0, exp=10;
    int plus = 1;
    for (int i = 1; i <= N; i++)
    {
        if (i / exp > 0)
        {
            plus++;
            exp *= 10;
        }
        len += plus;
    }
    return len;
}
 
void test(long long K)
{
    //printf("L: %d\n", getLen());
    if (getLen() < K)
    {
        printf("%d\n", -1);
        return;
    }
 
    long long int startOff, startNum;
    int s;
    for (s = 0; s <= 20; s++)
        if (sum[s + 1] >= K || s + 1 == 20)
        {
            startOff = sum[s] + 1; // 다음 자릿수 첫번째 옵셋
            startNum = d[s] + 1; // 담자릿수 첫째 수
            s++;
            break;
        }
    long long int v = (K - startOff) / s; //s=자릿수
    int mod = (K - startOff) % s;
 
    long long int num = startNum + v;
    int answer = -1;
     
    /*printf("s_off: %d\n", startOff);
    printf("s_num: %d\n", startNum);
    printf("v: %d\n", v);
    printf("num: %d\n", num);
    printf("mod: %d\n", mod);
     
    */
 
            int cnt = s - mod;
            for (int i = 1; i < cnt; i++)
                num /= 10;
 
            answer = num % 10;
     
 
    printf("%d\n", answer);
    //printf("\n=======================================\n");
}
 
 
int main()
{
    long long j=9;
    sum[0] = 0;
    d[0] = 0;
    for (int i = 1; i <= 20; i++, j *= 10)
    {
        sum[i] = sum[i-1] + (i*j) ;
        d[i] = d[i - 1] + j;
 
    }
    scanf("%d %d", &N, &K); 
 
     
    test(K);
     
    return 0;
}
