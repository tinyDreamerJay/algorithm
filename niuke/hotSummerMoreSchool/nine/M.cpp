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
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int n;
        int ori = 0;
        ci n;
        if(n<10){
            ct n en;
            continue;
        }
        int n1 = n*10;
        ori = n;
        int sumHe = 0;
        int sumCheng = 0;
        while (n1/10>0)
        {   
            int now = n1%10;
            sumHe += now;
            n1/=10;
        }
        sumHe += n1;
        while (n/10>0)
        {
            int now = n%10;
            sumCheng += now*10;
            n/=10;
        }
        sumCheng += n*10;
        if(sumHe==sumCheng){
            ct "10" en;
        }
        else
        {
            ct "-1" en;
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