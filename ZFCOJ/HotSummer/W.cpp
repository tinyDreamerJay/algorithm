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
int dp[21][11];
int pos[21][11];
void solve(){
    int n,k;
    while (cin>>n>>k)
    {
        for (int i = 0; i < 22; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                dp[i][j] = 1e18;
                pos[i][j] = 0;
            }
        }
        rep1(j,k){
            dp[1][j] = 0; 
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                cin>>pos[i][j];
            }
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                for (int l = 1; l <= k; l++)
                {
                    dp[i][j] = min(dp[i][j],dp[i-1][l]+abs(pos[i][j]-pos[i-1][l]));
                }
            }
        }
        int ans = 1e18;
        for (int i = 1; i <= k; i++)
        {   
            ans = min(dp[n][i],ans);
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