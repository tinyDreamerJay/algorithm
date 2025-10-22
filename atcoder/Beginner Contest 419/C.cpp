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
const int N = 2e5+100;
int r[N],c[N];
void solve(){
    int n;
    ci n;
    rep0(i,n){
        ci r[i];
        ci c[i];
    }
    int MaxR=0;
    int MinR=1e9+1;
    int MaxC=0;
    int MinC=1e9+1;
    rep0(i,n){
        MaxR = max(MaxR,r[i]);
        MaxC = max(MaxC,c[i]);
        MinR = min(MinR,r[i]);
        MinC = min(MinC,c[i]);
    }
    int dx = (MaxR-MinR+1)/2;
    int dy = (MaxC-MinC+1)/2;
    int t = 0;
    t = max(dx,dy);
    ct t en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}