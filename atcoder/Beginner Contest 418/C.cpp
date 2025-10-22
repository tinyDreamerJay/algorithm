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
const int N = 3e5+100;
int tea[N];
int pre[N];
void solve(){
    int n,q;
    ci n;
    ci q;
    rep0(i,n){
        ci tea[i];
    }
    sort(tea,tea+n);
    pre[0] = tea[0];
    rep1(i,n){
        pre[i] = tea[i] + pre[i-1];
    }
    //b<=最小的一个组内的值直接声明n*(b-1)+1就行了
    //b>最大的组的值则输出-1
    //b在数组之间就做前缀和到刚好小于b的数组，加上后面的数组×b-1+1；
    rep0(i,q){
        int b;
        ci b;
        if(b<tea[0]){
            ct n*(b-1)+1 en;
            continue;
        }
        if(b>tea[n-1]){
            ct "-1" en;
            continue;
        }
        int idx = lower_bound(tea,tea+n,b)-tea;
        int ans = pre[idx-1]+(n-idx)*(b-1)+1;
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
//5 5 1 2 3 4 5 0 6