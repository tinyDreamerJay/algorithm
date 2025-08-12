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
const int N = 1e3+100;
int value[N];
int pre[N];
int Max[N][N];
int Min[N][N];
void solve(){
    int n;
    ci n;
    pre[0] = value[0] = 0;
    rep1(i,n){
        ci value[i];
        value[i+n] = value[i];
    }
    rep1(i,n*2){
        pre[i] = pre[i-1]+value[i];
    }
    rep1(i,2*n){
        Max[i][i] = 0;
        Min[i][i] = 0;
    }
    
    int minn = 1e8;
    int maxx = -1e8;
    for (int len = 2; len <= 2*n; len++)
    {
        for (int i = 1; i+len-1 <= 2*n; i++)
        {
            int j = i+len-1;
            Max[i][j]=-1e8;
            Min[i][j]=1e8;
            for (int k = i; k < j; k++)
            {
                Max[i][j] = max(Max[i][j],Max[i][k]+Max[k+1][j]+pre[j]-pre[i-1]);
                Min[i][j] = min(Min[i][j],Min[i][k]+Min[k+1][j]+pre[j]-pre[i-1]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        maxx = max(Max[i][i+n-1],maxx);
        minn = min(Min[i][i+n-1],minn);
    }
    ct minn en;
    ct maxx en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}