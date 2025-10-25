#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<iomanip>
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
    string s;
    ci s;
    int cntT=0;
    int firT;
    int lastT;
    double ans = 0;
    rep0(i,s.size()){
        if(s[i]=='t'){
            cntT = 1;
            for (int j = i+1; j < s.size(); j++)
            {   
                if(s[j]=='t')
                cntT++;
                if(cntT>=3){
                    ans = max(ans,((double)cntT-2.0)/((double)j-(double)i-1.0));
                }
            }
        }
    }
    cout<<fixed<<setprecision(25)<<ans;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}