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
const int Mod = 1000000007;
void solve(){
    int n,q;
    while (cin>>n>>q)
    {   
        string ops;
        ci ops;
        vector<int> a(n);
        rep0(i,n){
            ci a[i];
        }
        int cur = 0;
        vector<int> groupID(n+1);
        for (int i = 1; i < n; i++)
        {
            if(ops[i-1]=='*'){
                groupID[i] = cur;
            }else{
                cur++;
                groupID[i] = cur;
            }
        }
        int total = cur+1;
        vector<vector<int>> group(total);
        rep0(i,n){
            group[groupID[i]].push_back(i);
        }
        vector<int> groupMul(total,1);
        for(int i=0;i<total;i++){
            for(int j:group[i]){
                groupMul[i] = (groupMul[i]*a[j])%Mod;
            }
        }
        int sum=0;
        for(int num:groupMul){
            sum = (sum+num)%Mod;
        }
        rep0(i,q){
            int idx;
            ci idx;
            int num;
            ci num;
            idx--;
            if(a[idx]==num){
                cout << sum % Mod << '\n';
                continue;   
            }
            a[idx] = num;
            int g = groupID[idx];
            int New=1;
            for(int i:group[g]){
                New = (New*a[i])%Mod;
            }
            sum = (sum-groupMul[g]+New+Mod)%Mod;
            groupMul[g] = New;
            ct sum%Mod en;
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