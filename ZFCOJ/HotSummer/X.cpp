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
int nums[N];
int dp[N][8];
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int n,k;
        ci n;
        ci k;
        rep1(i,n){
            ci nums[i];
        }
        rep1(i,7){
            dp[1][i] = nums[1]==i?0:1;
        }
        //dp[i][j] i表示位置 j表示音符 值表示要修改的次数
        //属性是min
        for (int i = 1; i <= n; i++)
        {       
            if(i==1)
            continue;
            for (int j = 1; j <= 7; j++)
            {   
                dp[i][j] = 1e18;
                rep1(prev,7){
                    if(abs(j-prev)<=k){
                        int cost = (nums[i]!=j)?1:0;
                        dp[i][j] = min(dp[i][j],dp[i-1][prev]+cost);
                    }
                }
            }
        }
        int res =1e18;
        rep1(i,7){
            res = min(res,dp[n][i]);
        }
        ct res en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}