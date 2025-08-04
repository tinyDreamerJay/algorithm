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
int tmp1[N];
int tmp2[N];
void solve(){
    int T;
    ci T;
    while (T--)
    {
        int n;
        ci n;
        rep0(i,n){
            char ch;
            ci ch; 
            a[i] = ch - '0';
        }
        rep0(i,n){
            b[i] = (i % 2 == 1) ? 1 : 0;  
            c[i] = (i % 2 == 0) ? 1 : 0; 
        }
        int ans1 = 0, ans2 = 0;
        
        int i = 0;
        while (i < n) {
            if (i < n - 1 && a[i] == 1 && a[i+1] == 0 && i % 2 == 0) {
                tmp1[i] = 0;
                tmp1[i+1] = 1;
                ans1++;
                i += 2; 
            } else {
                tmp1[i] = a[i];
                i++;
            }
        }
        i = 0;
        while (i < n) {
            if (i < n - 1 && a[i] == 0 && a[i+1] == 1 && i % 2 == 0) {
                tmp2[i] = 1;
                tmp2[i+1] = 0;
                ans2++;
                i += 2; 
            } else {
                tmp2[i] = a[i];
                i++;
            }
        }
        if (n >= 2) {
            if (tmp1[0] == 1 && tmp1[n-1] == 0) {
                tmp1[0] = 0;
                tmp1[n-1] = 1;
                ans1++;
            }
            if (tmp2[0] == 0 && tmp2[n-1] == 1) {
                tmp2[0] = 1;
                tmp2[n-1] = 0;
                ans2++;
            }
        }
        rep0(i,n){
            if (tmp1[i] != b[i]) ans1++;
            if (tmp2[i] != c[i]) ans2++;
        }
        if(ans1<ans2){
            ct ans1 en;
        }else
        {
            ct ans2 en;
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
