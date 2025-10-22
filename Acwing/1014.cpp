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
int dp1[N];
int dp2[N];
int nums[N];
void solve(){
        int n;
        ci n;
        rep1(i,n){
            ci nums[i];
        }
        int res = 0;
        for (int i = 1; i <= n; i++)
        {   
            dp1[i] = 1;
            for (int j = 1; j < i; j++)
            {
                if(nums[i]>nums[j]){
                    dp1[i] = max(dp1[i],dp1[j]+1);
                }
            }
            res = max(dp1[i],res);
        }
        for (int i = n; i >=1; i--)
        {   
            dp2[i] = 1;
            for (int j = n; j > i; j--)
            {
                if(nums[i]>nums[j]){
                    dp2[i] = max(dp2[i],dp2[j]+1);
                }
            }
            res = max(dp2[i],res);
        }
        int result = 0;
        for (int i = 1; i <= n; i++)
        {
            result = max(dp1[i]+dp2[i],result);
        }
        ct n-result+1 en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}