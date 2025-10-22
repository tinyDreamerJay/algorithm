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
        int sum = 0;
        vector<int> res;
        int num = 1;
        rep1(k,18){
            num*=10;
            if(n%(1+num)==0){
                res.push_back(n/(1+num));
            }
        }
        ct res.size() en;
        if(res.size()==0)
        continue;
        sort(res.begin(),res.end());
        for(auto nums:res){
            ct nums <<" ";
        }
        ct '\n';
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}