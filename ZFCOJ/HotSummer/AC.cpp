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
bool isBitOne(int num,int k){
    int res = 1;
    rep0(i,k){
        res *= 2;
    }
    int remainder = num%(res*2);
    return remainder>=res;
}
int power(int k){
    int res = 1;
    rep1(i,k){
        res*=2;
    }
    return res;
}
void solve(){
    int n,q;
    while (cin>>n>>q)
    {   
        vector<int> a(n+1);
        rep1(i,n){
            ci a[i];
        }
        vector<vector<int>> pre(31,vector<int>(n+1,0));
        for(int i = 0; i < 31; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                pre[i][j] = pre[i][j-1] + (isBitOne(a[j],i)?1:0);
            }    
        }
        rep0(i,q){
            int l,r;
            ci l;
            ci r;
            int cnt0 = 0;
            int cnt1 = 0;
            int x = 0;
            int len = r-l+1;
            for(int i = 0;i<31;i++){
                cnt1 = pre[i][r]-pre[i][l-1];
                cnt0 = len - cnt1;
                int v1 = cnt0 * power(i);
                int v0 = cnt1 * power(i);
                if(v1>v0){
                    x += power(i);
                }
            }
            ct x en;
        }
        ct '\n';
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}