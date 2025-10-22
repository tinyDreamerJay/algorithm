#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<unordered_map>
#include<vector>
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
void solve(){
    int k;
    int a,b;
    while (cin>>k>>a>>b)
    {   
        vector<int> dp(k+1, 0);  
        int va=0,vb=0,pa=0,pb=0;
        for(int i = 1;i<=k;i++){
            va = dp[pa]+a;
            vb = dp[pb]+b;
            if(va<vb){
                dp[i] = va;
                pa++;
            }else if(va>vb){
                dp[i] = vb;
                pb++;
            }else{
                dp[i] = va;
                pb++;
                pa++;
            }
        }
        cout<<dp[k]<<endl; 
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}
