#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int N;
int main()
{
    scanf("%d", &N);
    vector<int> p(N);
    for (int i = 0; i < N; i++)
        scanf("%d", &p[i]);
    sort(p.begin(), p.end());
    int answer = p[0];
    for (int i = 1; i < p.size(); i++)
    {
        p[i] = p[i] + p[i - 1];
        answer += p[i];
    }
    printf("%d\n", answer);
    return 0;
}
