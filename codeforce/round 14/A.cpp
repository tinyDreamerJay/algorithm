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
        int n;
        ci n;
        string a;
        ci a;
        int m;
        ci m;
        string b;
        ci b;
        string c;
        ci c;
        rep0(i,m){
            if(c[i]=='D'){
                a = a+b[i];
            }else
            {
                a = b[i]+a;
            }
        }
        ct a en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}