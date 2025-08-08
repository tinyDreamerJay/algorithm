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
struct node
{
    int north;
    int south;
    int value;
    int step;
}dp[N];
bool cmp(node a,node b){
    return a.south<b.south;
}
void solve(){
    int n;
    ci n;
    rep1(i,n){
        ci dp[i].north;
        ci dp[i].south;
        dp[i].value = abs(dp[i].north-dp[i].south);
    }
    int res =0;
    sort(dp+1,dp+n+1,cmp);
    for (int i = 1; i <= n; i++)
    {   
        dp[i].step = 1;
        for (int j = 1; j < i; j++)
        {
            if(dp[i].north>dp[j].north){
                dp[i].step = max(dp[i].step,dp[j].step+1);
            }
        }
        res = max(dp[i].step,res);
    }
    ct res en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}