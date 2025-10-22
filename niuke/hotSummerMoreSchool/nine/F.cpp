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
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int sx1,sy1,sx2,sy2,tx1,ty1,tx2,ty2;
        ci sx1>>sy1>>sx2>>sy2>>tx1>>ty1>>tx2>>ty2;
        int cnt=0;
        int cnt1 =0;
        cnt1 += max(abs(tx1-sx1),abs(ty1-sy1));
        cnt1 += max(abs(tx2-sx2),abs(ty2-sy2));
        int cnt2 = 0;
        cnt2 += max(abs(tx1-sx2),abs(ty1-sy2));
        cnt2 += max(abs(tx2-sx1),abs(ty2-sy1));
        cnt = min(cnt1,cnt2);
        ct cnt en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}