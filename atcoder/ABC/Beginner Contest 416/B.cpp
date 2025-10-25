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
const int N = 1e6+100;
char nums[N];
void slove(){
    string s;
    string t;
    ci s;
    t = s;
    int firstjin = 0;
    bool dian =true;
    rep0(i,s.size()){
        if(s[i]!='.'){
            dian = false;
        }
    }
    if(dian){
        t[0] = 'o';
        ct t en;
        return;
    }
    if(s.size()==1){
        if(t[0]=='.'){
            ct'o';
            return;
        }else
        {
            ct '#' en;
            return;
        }
        
    }
    rep0(i,s.size()-1){
        if(s[i]=='#'&&s[i+1]=='.'){
            t[i+1] = 'o';
        }
    }
    rep0(i,s.size()){
        if(s[i]=='#'){
            firstjin=i;
            break;
        }
    }
    if(firstjin!=0)
    if(t[firstjin-1]=='.')
    t[firstjin-1] = 'o';
    ct t en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}