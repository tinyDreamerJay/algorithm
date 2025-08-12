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
const int N = 2e5+100;
int S[N];
int T[N];
bool vis[N];
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    int Te;
    ci Te;
    while (Te--)
    {   
        int n;
        int k;
        ci n;
        ci k;
        rep1(i,n){
            ci S[i];
        }
        rep1(i,n){
            ci T[i];
        }
        if(k==1){
            ct "YES" en;
            continue;
        }
        rep1(i,n){
            S[i] = S[i]%k;
            T[i] = T[i]%k;
        }
        sort(S+1,S+1+n);
        sort(T+1,T+1+n,cmp);
        bool ans = true;
        bool same = true;
        rep1(i,n){
            if(S[i]!=T[i]){
                same = false;
                break;
            }
        }
        if(same){
            ct "YES" en;
            continue;
        }
        rep1(i,n){
            if(S[i]+T[i]!=k){
                ans = false;
                break;
            }
        }
        if(ans)
        ct "YES" en;
        else
        ct "NO" en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}