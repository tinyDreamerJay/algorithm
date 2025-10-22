#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

#define int long long
#define rep0(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0

void solve(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    ci T;
    while(T--){
        int n,m;
        ci n>>m;
        vector<int>p(m);
        rep0(i,m) ci p[i];
        unordered_map<int,int> mp;
        vector<int> a, b;
        vector<bool> vis1(n+1,false), vis2(n+1,false);
        rep0(i,m){
            mp[p[i]]++;
            vis2[p[i]] = true;
            if(!vis1[p[i]]){
                b.push_back(p[i]);
                vis1[p[i]] = true;
            }
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
        });
        for(auto& p : vec) a.push_back(p.first);
        // rep1(i,n){
        //     if(!vis2[i]) a.push_back(i);
        //     if(!vis1[i]) b.push_back(i);
        // }
        int cnt = 0;
        // rep0(i,n){  
        //     if(a[i] != b[i]) cnt++;
        // }
        // rep0(i,n){  
        //     ct a[i] <<" ";
        // }
        // ct endl;
        // rep0(i,n){  
        //     ct b[i] <<" ";
        // }
        ct cnt en;
    }
}

signed main(){
    solve();
    r0;
}
