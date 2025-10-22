#include<iostream>
#include<vector>
using namespace std;
const int Max = 15;
vector<pair<int,int>> edges;
int col[Max];
int n,m;
int ans = 1e5;
int countEdges(){
    int cnt = 0;
    for(auto& e:edges){
        int cA = col[e.first];
        int cB = col[e.second];
        if(cA==cB){
            cnt++;
        }
    }
    return cnt;
}

void dfs(int idx){
    if(idx==n){
        int cnt = countEdges();
        if(cnt<ans){
            ans = cnt;
        }
        return ;
    }
    col[idx] = 0;
    dfs(idx+1);
    col[idx] = 1;
    dfs(idx+1);
}

signed main(void){
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        edges.push_back({a,b});
    }
    dfs(0);
    cout<<ans;
}