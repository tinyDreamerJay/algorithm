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
void slove(){
    int T;
    ci T;
    while (T--)
    {
        int n;
        ci n;
        string str;
        ci str;
        int f;
        bool f1 =false;
        int s;
        bool s1 = false;
        int t;
        bool t1 = false;    
        rep0(i,str.size()){
            if(!f1&&str[i]=='1'){
                f1 =true;
                f = i;
            }else
            if(!s1&&str[i]=='1'){
                s1 =true;
                s = i;
            }else
            if(!t1&&str[i]=='1'){
                t1 =true;
                t = i;
            }
        }
        if (t-s==s-f)
        {   
            ct "Yes" en;
            /* code */
        }else
        {
            ct "No" en;
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