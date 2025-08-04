//问题 B: 基础算法练习-谁是老板（模板题）
#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5+5;
vector<int> G[N];
int rudu[N];
int employee[N];
void dfs(int u){
    employee[u] = G[u].size();
    for(auto v:G[u]){
        dfs(v);
    }
}
int main(void){
    int n;
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
        dfs(boss);
        int Max = -1;
        int maxnum = -1;
        for (size_t i = 1; i <= n; i++)
        {   
            if (employee[i]>maxnum)
            {   
                Max = i;
                maxnum = employee[i];
            }
        }
        cout<<boss<<" "<<Max<<endl;
    }
}