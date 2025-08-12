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
        int a[20];
        int b[20];
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int n;
        ci n;
        rep1(i,n){
            ci a[i];
        }
        rep1(i,n){
            ci b[i];
        }
        int ans=0;
        while(1){
            ans++;
            bool f = false;
            bool t = false;
            rep1(j,n){
                if(a[j]>b[j]&&!f){
                        a[j]-=1;
                        f=true;
                }
                if(a[j]<b[j]&&!t){
                        a[j]+=1;
                        t = true;
                }
            }
            if(!f)
            break;
        }
        ct ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}