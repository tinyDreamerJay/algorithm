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
const int MAXN = 1e6 + 5;
vector<int> in[MAXN]; 
vector<int> out[MAXN]; 
void solve(){
    int n,m,k;
    while (cin>>n>>m>>k)
    {   
        rep1(i,n){
            in[i].clear();
            out[i].clear();
        }
        rep0(i,m){
            int x,y;
            ci x;
            ci y;
            out[x].push_back(y);
            in[y].push_back(x);
        }
        int need = 0;
        int ans = 0;
        int carry = 0;
        rep1(i,n){
            carry -= in[i].size();
            carry += out[i].size();
            if(carry>0)
            need = ceil((double)carry/k);
            ans = max(ans,need);
        }
        ct ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}