#include<stdio.h>
#include<algorithm>
#include<vector>
 
using namespace std;
struct V
{
    int begin, end;
};
 
bool cmp(const V &u, const V &v)
{
    if (u.end == v.end)
        return u.begin < v.begin;
    else
        return u.end < v.end;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    vector<V> sche(n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &sche[i].begin, &sche[i].end);
 
    sort(sche.begin(), sche.end(), cmp);
    int lastEnd = 0;
    int answer = 0;
    for (int i = 0; i<sche.size(); i++)
    {
        if (sche[i].begin >= lastEnd)
        {
            answer++;
            lastEnd = sche[i].end;
        }
    }
    printf("%d\n", answer);
    return 0;
}
