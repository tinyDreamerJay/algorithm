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
    int n;
    while (ci n)
    {   
        bool f = true;
        vector<int> a(n+1),cnt[n+1],ans(n+1);
        rep1(i,n){
            ci a[i];
        }
        int Max = a[1];
        if(a[1]>=2){
            f = false;
        }
        for(int i = 1;i<=n;i++){
            if(a[i]>Max+1){
                f = false;
            }else{
            Max = max(Max,a[i]);
            }
            cnt[a[i]].push_back(i);
        }
        if(!f){
        ct "-1" en;
        continue;
        }
        int num = 1;
        for(int i = 1;i<=n;i++){
            for(int j = cnt[i].size()-1;j>=0;j--){
                ans[cnt[i][j]] = num;
                num++;
            }
        }
        for(int i = 1;i<=n;i++){
            ct ans[i] <<" \n"[i==n];
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}