#include<iostream>
#include<string>
#include <map>
#include<queue>
using namespace std;
int ns[3];
int cnt[3];
 
 
int bfs(vector<string> initState)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < initState[i].length(); j++)
            ns[initState[i][j] - 'A']++;
 
    map<vector<string>, int> m; // 상태, depth(길이)
    queue<vector<string>> Q;
    Q.push(initState);
    m[initState] = 0;
 
    while (!Q.empty())
    {
        vector<string> curState = Q.front();
        Q.pop();
         
        for (int from = 0; from < 3; from++)
        {
            for (int to = 0; to < 3; to++)
            {
                if (from == to || curState[from].length()==0)
                    continue;
                vector<string> nextState(curState);
                nextState[to].push_back(nextState[from].back());
                nextState[from].pop_back();
 
                if (m.count(nextState)==0) // nextState를 처음 접한다면
                {
                    m[nextState] = m[curState] + 1; //depth + 1
                    Q.push(nextState);
                }
            }
        }
    }
 
    vector<string> str(3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < ns[i]; j++)
            str[i] += (char)(i + 'A');
 
//  for (int i = 0; i < 3; i++)
        //cout << i <<  " " << str[i] << endl;
 
    return m[str]; //길이 반환
 
}
 
int main()
{
    vector<string> initState(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> cnt[i];
        if (cnt[i] > 0)
            cin >> initState[i];
        else
            initState[i] = "";
    }
 
    cout << bfs(initState) << endl;
 
    return 0;
}
