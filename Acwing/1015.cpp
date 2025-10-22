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
int dp[105][105];
int nums[105][105];
void slove(){
        int n;
        ci n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                ci nums[i][j];
            }
        }
        dp[1][1] = nums[1][1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {   
                if(i==1&&j==1)
                continue;
                if(i==1){
                    dp[i][j] = dp[i][j-1]+nums[i][j]; 
                }else if(j==1){
                    dp[i][j] = dp[i-1][j]+nums[i][j];
                }else{
                    dp[i][j] = min(dp[i-1][j]+nums[i][j],dp[i][j-1]+nums[i][j]);
                }
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {   
        //         ct dp[i][j]<<" ";
        //     }
        //     ct endl;
        // }
        ct dp[n][n] en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}