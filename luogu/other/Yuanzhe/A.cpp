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
void solve(){
    int n;
    ci n;
    rep1(i,n){
        ci nums[i];
    }
    nums[1] = min(5LL,nums[1]+2-1);
    for (int i = 2; i <= n; i++)
    {
        nums[i] = min(5LL,nums[i]-1);
    }
    rep1(i,n){
        ct nums[i]<<" ";
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}