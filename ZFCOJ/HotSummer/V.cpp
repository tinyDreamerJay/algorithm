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
int value[N];
int dp[N];
void solve(){
    int n;
    while (ci n)
    {   
        rep1(i,n){
            ci value[i];
        }
        string s;
        ci s;
        s = s;
        dp[0] = dp[1] = 0;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1];
            if(s[i-1] != s[i-2]){
                dp[i] = max(dp[i], dp[i-2] + value[i-1] + value[i]);
            }
        }
        
        ct dp[n] en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}