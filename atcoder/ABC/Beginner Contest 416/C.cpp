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
int n,k,x;
string yuan[N];
bool vis[N];
vector<string> strs;
vector<string> tmp;
void dfs(int step){
    if(step == k){
        string s="";
        for(auto a:tmp){
            s = s+a;
        }
        // tmp.clear();
        strs.push_back(s);
        return;
    }   
    rep0(i,n){
            tmp.push_back(yuan[i]);
            dfs(step+1);
            tmp.pop_back();
    }
}
bool cmp(string a,string b){
    return a<b;
}
void slove(){
    ci n;
    ci k;
    ci x;
    rep0(i,n){
        ci yuan[i];
    }
    dfs(0);
    sort(strs.begin(),strs.end(),cmp);
    vector<string>::iterator it = strs.begin()+x-1;
    cout<<strs[x-1];
    // for(auto s:strs){
    //     ct s en;
    // }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}