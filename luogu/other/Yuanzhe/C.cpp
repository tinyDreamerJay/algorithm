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
    int ans = 0;
    rep1(i,n){
        int l = 1;
        int r = 2e8;
        int cnt = 0;
        int mid;
        while (l<=r)
        {   
            mid = (l+r)/2;
            if((1+mid)*mid/2>=nums[i]){
                cnt = mid;
                r = mid-1; 
            }else{
                l = mid+1;
            }
        }
        ans += cnt;
    }
    cout << ans;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}