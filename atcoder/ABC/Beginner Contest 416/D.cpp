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
const int N = 3e5+100;
int a[N];
int b[N];
int f[N];
bool vis[N];
void slove(){
    int T;
    ci T;
    while (T--)
    {   
        int n,m;
        ci n;
        ci m;
        rep0(i,n){
            ci a[i];
        }
        rep0(i,n){
            ci b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int l = 0;
        int r = n-1;
        int ans =0;
        for (int i = n-1; i >= 0; i--)
        {
            while (l<n&&a[i]+b[l]<m)
            {
                ans += b[l];
                l++;
            }
            if(l<n){
            ans += (a[i]+b[l])%m;
            l++;
            r = i-1;
            }
        }
        for (int i = r; i >= 0; i--)
        {
            ans += a[i];
        }    
        for (int i = l; i < n; i++)
        {
            ans += b[i];
        }    
        ct ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}