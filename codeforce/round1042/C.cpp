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
        vector<int> a(n);
        vector<int> b(n);
        unordered_map<int,int> mp;
        rep0(i,n) ci a[i];
        rep0(i,n) ci b[i];
        for(int num:a) mp[num%k]++;
        bool f = true;
        for(int num:b){
            if(mp[num%k]>0){
                mp[num%k]--;
            }else if(mp[k-num%k]>0){
                mp[k-num%k]--;
            }else
            {   
                f =false;
                break;
            }
        } 
        if(f){
            ct "YES" en;
        }else{
            ct "NO" en;
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