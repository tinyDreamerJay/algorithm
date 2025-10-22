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
struct node1
{   
    int a,b,c,d,e;
    int id;    
    /* data */
}man[N];
struct node2
{   
    int id;
    int f,g,h,i;    
}woman[N];
void solve(){
    int n,m;
    ci n;
    ci m;
    rep1(i,n){
        ci man[i].a;
        ci man[i].b;
        ci man[i].c;
        ci man[i].d;
        ci man[i].e;
        man[i].id = i;
    }
    rep1(j,m){
        ci woman[j].f;
        ci woman[j].g;
        ci woman[j].h;
        ci woman[j].i;
        woman[j].id = j;
    }

}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}