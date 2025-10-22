#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<numeric>
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
int p[N];
int s[N];
int ans[N];
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b; // 先除后乘，防止 a*b 溢出
}
void slove(){
    int T;
    ci T;
    while (T--)
    {   
         int n;
         ci n;
         rep0(i,n){
            ci p[i];
         }
         rep0(i,n){
            ci s[i];
         }
         bool b = false;
         for (int i = 1; i < n; i++)
         {
             if(p[i-1]%p[i]||p[i-1]<p[i]) {ct "NO" en,b = true;break;}
         }
         if(b)
         continue;
         for (int i = n-2; i >= 0; i--)
         {
             if(s[i+1]%s[i]||s[i+1]<s[i]) {ct "NO" en,b = true;break;}
         }
         if(b)
         continue;
         rep0(i,n){
            ans[i] = lcm(p[i],s[i]);
         }
         if(p[0]!=ans[0]||ans[n-1]!=s[n-1]){
                ct "No" en;
                continue;
         }
         bool check = true;
         for (int i = 1; i < n; i++)
         {
             if (gcd(ans[i],p[i-1])!=p[i])
             {  
                check = false;
                break;
             }
         }
         for (int i = n-2; i >= 0; i--)
         {
             if(gcd(ans[i],s[i+1])!=s[i])
             {  
                check = false;
                break;
             }
         }
         if(check)
         ct "Yes" en;
         else
         ct "No" en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}