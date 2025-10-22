#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<unordered_map>
using namespace std;
#define int long long
#define rep0(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e5+100;
string s;
vector<vector<int>> adj;
int l,r;
int cnt;

void dfs(int u,int prev,int value){
    int newValue = value*2+(s[u-1]-'0');
    if(prev!=-1){
        if(newValue>=l&&newValue<=r){
            cnt++;
        }
    }
    for(auto v:adj[u]){
        if(v==prev){
            continue;
        }
        if(newValue>r){
            continue;
        }
        dfs(v,u,newValue);
    }
}

void solve(){
    int n;
    while (cin>>n>>l>>r)
    {
           ci s;
           adj.assign(n+1,vector<int>());
           for(int i = 0;i<n-1;i++){
                int u,v;
                ci u;
                ci v;
                adj[u].push_back(v);
                adj[v].push_back(u);
           }
           cnt = 0;
           for(int i = 1;i<=n;i++){
                dfs(i,-1,0);
           }
           ct cnt en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}