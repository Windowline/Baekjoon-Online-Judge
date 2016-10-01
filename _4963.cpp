#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
 
class pos
{
    public:
        int y, x;
        pos(int y, int x)
        {
            this->y = y;
            this->x = x;
        }
};
 
int h, w;
int F[51][51];
bool v[51][51];
int dx[8] = { 1, -1, 0, 0, 1, -1, 1, -1};
int dy[8] = { 0, 0, 1, -1, 1, -1, -1, 1};
 
void bfs(pos start)
{
    queue<pos> Q;
    Q.push(start);
    while(!Q.empty())
    { 
        pos cur = Q.front();
        Q.pop();
        for (int p = 0; p < 8; p++)
        {
            int nx = cur.x + dx[p];
            int ny = cur.y + dy[p];
            if (nx >= 1 && nx <= w && ny >= 1 && ny <= h && F[ny][nx] == 1)
            {
                if (!v[ny][nx])
                {
                    v[ny][nx] = true;
                    Q.push(pos(ny, nx));
                }
            }
        }
    }
}
 
int main()
{
    while (true)
    {
        memset(v, false, sizeof(v));
        memset(F, -1, sizeof(F));
        cin >> w >> h;
        if (w == 0 && h == 0)
            break;
        for (int y = 1; y <= h; y++)
            for (int x = 1; x <= w; x++)
                cin >> F[y][x];
 
        int ans = 0;
        for(int y=1; y<=h; y++)
            for(int x=1; x<=w; x++)
                if (!v[y][x] && F[y][x]==1)
                {
                    v[y][x] = true;
                    bfs(pos(y, x));
                    ans++;
                }
        cout << ans << endl;
    }
    return 0;
}
