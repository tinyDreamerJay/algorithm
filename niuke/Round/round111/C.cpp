#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<stack>
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
int a[N];
void solve(){
    int n,k,x;
    ci n;
    ci k;
    ci x;//序列改变的长度
    //改变的序列的次数 = k%x
    rep1(i,n){
        ci a[i]; 
    }
    int c = k%x;
    
    stack <int> q;
    for(int i = 1;i<=x;i++){
        q.push(a[i]);
    }
    vector<int> v;
    if(c<x&&c!=0){
        int d = x-c;
        while (c>0)
        {      
            v.push_back(q.top());
            q.pop();
            c--;
        }
        vector<int> tmp;
        while(!q.empty()){
            tmp.push_back(q.top());
            q.pop();
        }
        reverse(tmp.begin(),tmp.end());
        for(auto num:tmp){
            v.push_back(num);
        }
        for(int i = x+1;i<=n;i++){
            v.push_back(a[i]);
        }
    }else{
        c = x;
        while (c>0)
        {      
            v.push_back(q.top());
            q.pop();
            c--;
        }
        vector<int> tmp;
        while(!q.empty()){
            tmp.push_back(q.top());
            q.pop();
        }
        reverse(tmp.begin(),tmp.end());
        for(auto num:tmp){
            v.push_back(num);
        }
        for(int i = x+1;i<=n;i++){
            v.push_back(a[i]);
        }
    }
    for(int i = x+1;i<=n;i++){
        v.push_back(a[i]);
    }
    for(auto num:v){
        ct num <<" ";
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}