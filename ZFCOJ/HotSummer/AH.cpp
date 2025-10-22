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
const int N = 1e6+100;
int dp[N][3];
int a[N];
int b[N];
void solve(){
    int n;
    while (cin>>n)
    {
        rep1(i,n){
            ci a[i];
        }
        rep1(i,n){
            ci b[i];
        }
        rep1(i,n){
            rep0(j,3)
            dp[i][j] = 0;
        }
        rep1(i,n){
            if(b[i]==1){
                dp[i][0] = max(dp[i-1][0],dp[i-1][1]) + a[i];
                dp[i][1] = dp[i-1][1]+a[i-1];
                if(i<n)
                dp[i][2] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]))+a[i+1];
            }else{
                dp[i][0] = dp[i][2] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
                dp[i][1] = max(dp[i-1][0],dp[i-1][1]);
            }
        }
        int ans = 0;
        rep1(i,n){
            ans = max(ans,dp[i][0]);
            ans = max(ans,dp[i][1]);
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