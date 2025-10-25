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
int a[101];
void solve(){
    int q;
    ci q;
    rep1(i,100){
        a[i] = 0;
    }
    int Min = 101;
    for (int i = 0; i < q; i++)
    {
        int ops,x;
        ci ops;
        if(ops==1){
            ci x;
            a[x]++;
        }else if(ops==2){
            for (int j = 1; j <= 100; j++)
            {
                if(a[j]>0){
                    a[j]--;
                    ct j en;
                    break;
                }
            }
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