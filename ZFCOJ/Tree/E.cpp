//问题 E: 基础算法练习-到根节点的距离(经典模板题)
#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>> G[N];
int dis[N];
void dfs(int u,int parent){
    for(const auto& p : G[u]){
        if(p.first!=parent){
            int v = p.first;
            int w = p.second;
            dis[v] = dis[u]+w;
            dfs(v,u);
        }
    }
}
int main(void){
    int n,root;
    while (cin>>n>>root)
    {   
        for (size_t i = 1; i <= n; i++)
        {   
            G[i].clear();
            dis[i] = 0;
            /* code */
        }
        
        for (size_t i = 0; i < n-1; i++)
        {   
            int u,v,w;
            cin>>u>>v>>w;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
            /* code */
        }
        dis[root] = 0;
        dfs(root,-1);
        for (size_t i = 1; i <= n; i++)
        {   
            cout<<dis[i]<<" ";
            /* code */
        }
        cout<<"\n";
        /* code */
    }
    
}