#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N = 200005;
vector<int> G[N];
int pretty[N];
int depth[N];
void dfs(int u,int pa,int d){
    depth[u] = d;
    for(auto v : G[u]){
        if (v==pa)
        {   
            continue;
        }
        dfs(v,u,d+1);
    }
}
signed main( ){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            G[i].clear();
            pretty[i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            cin>>pretty[i];
        }
        dfs(1,0,1);
        // for (int i = 1; i <= n; i++)
        // {
        //     cout<<depth[i]<<" ";
        // }
        sort(pretty+1,pretty+1+n);
        sort(depth+1,depth+1+n);        
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += pretty[i]*depth[i];
        }
        cout<<sum;
        cout<<"\n";
    }
}