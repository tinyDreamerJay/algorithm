//问题 D: 基础算法练习-每个节点的父亲（经典模板题）
#include<iostream>
#include<vector>
using namespace std;
const int N = 200005;
vector<int> G[N];
int parent[N];
void dfs(int u,int p){
    parent[u] = p;
    for(auto v:G[u]){
        if(v!=p)
        dfs(v,u);
    }
    return;
}
int main(void){
    int n;
    int root;
    while (cin>>n>>root)
    {   
        for (size_t i = 1; i <= n; i++)
        {   
            parent[i] = -1;
            G[i].clear();
            /* code */
        }
        
        for (size_t i = 1; i <= n-1; i++)
        {      
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(root,-1);
        for (size_t i = 1; i <= n; i++)
        {
            cout<<parent[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}