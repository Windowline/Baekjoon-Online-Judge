#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
struct p
{
    int x, y;
};
struct tel
{
    p from, to;
};
bool check[3] = { false, false, false };
vector<tel> tels(3);
 
long long dist(p p1, p p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}
long long getMin(p cur, p end)
{
    long long ans = dist(cur, end); // cur-end
 
    for (int i = 0; i < tels.size(); i++) //i번째 텔 사용
    {
        if (check[i] == true)
            continue;
 
        check[i] = true;
        long long subAns1 = dist(cur, tels[i].from) + 10LL + getMin(tels[i].to, end);
        ans = min(subAns1, ans);
        long long subAns2 = dist(cur, tels[i].to) + 10LL + getMin(tels[i].from, end);
        ans = min(subAns2, ans);
        check[i] = false;
    }
    return ans;
}
 
int main()
{
    p start, end;
    cin >> start.x >> start.y >> end.x >> end.y;
    for (int i = 0; i < 3; i++)
    {
        cin >> tels[i].from.x >> tels[i].from.y;
        cin >> tels[i].to.x >> tels[i].to.y;
    }
    cout << getMin(start, end) << endl;
 
    return 0;
}
