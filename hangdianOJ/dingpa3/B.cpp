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
int a[N];
int b[N];
int c[N];
void slove(){
    int T;
    ci T;
    while (T--)
    {
        int n,m;
        ci n;
        ci m;
        rep0(i,n){
            a[i] = 0;
        }
        rep0(i,n){
            cin>>b[i];
        }
        rep0(i,n){
            cin>>c[i];
        }
        int Min = b[0];
        a[0] = b[0];
        for(int i=1;i<n;i++){
            if(b[i]>a[i-1]){
              a[i] = b[i];  
            }else{
                a[i] = a[i-1];
            }
            Min += a[i];
        }
        int Max = c[n-1];
        a[n-1] = c[n-1];
        for (int i = n-2; i >= 0; i--)
        {   
            if(c[i]<a[i+1]){
                a[i] = c[i];
            }else{
                a[i] = a[i+1];
            }
            Max += a[i];
        }
        if(m>=Min&&m<=Max){
            ct "YES" en;
        }else
        {
            ct "NO" en;
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