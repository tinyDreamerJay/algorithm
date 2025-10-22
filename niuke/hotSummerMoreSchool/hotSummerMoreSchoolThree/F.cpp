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
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e6+100;
void slove(){
    int t;
    ci t;
    while (t--)
    {   
        int n,a,b;
        ci n;
        ci a;
        ci b;
        if (a>=n)
        {   
            ct "Sayonara" en;
            continue;
        }
        int c = a+b;
        int k = n/c;
        int res;
        if(n>k*c+a&&n<=k*c+a+b)
        ct "0" en;
        else
        res = n-k*c,ct res en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}