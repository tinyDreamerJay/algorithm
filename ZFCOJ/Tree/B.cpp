//问题 B: 基础算法练习-无向树的子树高度(二)（经典模板题）
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int N = 100005;
int h[N];
vector<int> G[N];
int dfs(int u,int parent){
    h[u] = 0;
    for(auto v:G[u]){
        if(v!=parent)
        h[u] = max(h[u],dfs(v,u));
    }
    h[u]++;
    return h[u];
}
int main(void){
    int n;
    while (cin>>n)
    {   
        for (size_t i = 1; i <= n; i++)
        {
            G[i].clear();
            h[i] = 0;
        }
        for (size_t i = 1; i <= n-1; i++)
        {   
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        int num = dfs(1,-1);
        for (size_t i = 1; i <= n; i++)
        {   
            cout<<h[i];
            if (i!=n)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}