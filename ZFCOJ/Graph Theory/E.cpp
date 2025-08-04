//问题 E: 进场的顺序（一）
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int N = 1e5+5;
vector<int> G[N];
int rudu[N];
int employee[N];
void bfs(int boss){
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(boss);
    while (!q.empty())
    {   
        int u = q.top();
        q.pop();
        cout<<u<<" ";
        for(auto v:G[u]){
            q.push(v);
        }
    }
}
int main(void){
    int n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin>>n)
    {   
        for (size_t i = 1; i <= n; i++)
        {   
            G[i].clear();
            rudu[i] = 0;
            employee[i]=0;
        }
        for (size_t i = 1; i <= n-1; i++)
        {   
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            rudu[v]++;
        }
        int boss;
        for (size_t i = 1; i <= n; i++)
        {   
            if (rudu[i]==0)
            {   
                boss = i;
                break;
            }
        }
        bfs(boss);
        cout<<"\n";
    }
}