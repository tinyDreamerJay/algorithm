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
const int N = 5e5+100;
int diff[N];
int a[N];
void solve(){
    int n,m;
    ci n;
    ci m;
    rep1(i,n){
        diff[i] = a[i] = 0;
    }
    string s;
    string t;
    ci s;
    ci t;
    s=" "+s;
    t=" "+t; 
    rep0(i,m){
        int l,r;
        ci l;
        ci r;
        diff[l]++;
        diff[r+1]--;
    }
    rep1(i,n){
        a[i] = diff[i]+a[i-1];
    }
    string res=s;
    rep1(i,n){
        if(a[i]%2==0){
            res[i] = s[i];
        }else{
            res[i] = t[i];
        }
    }
    rep1(i,n){
        ct res[i];
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}