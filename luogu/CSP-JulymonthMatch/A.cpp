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
string mul(string a,char b){
    string res = a;
    int carry = 0;
    for (int i = a.size()-1; i >= 0;i--)
    {   
        res[i] = ((a[i]-'0')*(b-'0') + carry)%10+'0';
        carry =((a[i]-'0')*(b-'0') + carry)/10;
    }
    if(carry!=0){
        res = to_string(carry)+res;
    }
    // ct res en;
    return res;
}
void slove(){
    int n;
    string s;
    ci n;
    ci s;
    string tmp;
    rep0(i,n){
        ci tmp;
        string res = "1";
        rep0(i,tmp.size()){
            res = mul(res,tmp[i]);
        }
        bool ka = true;
        if(s.size()>res.size()){
            ct "kawaii" en;
        }else if(s.size()<res.size()){
            ct "dame" en;
        }else{
            rep0(i,s.size()){
                if(s[i]-'0'<res[i]-'0'){
                    ka = false;
                    break;
                }
            }
            if(ka) ct "kawaii" en;
            else ct "dame" en;
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}