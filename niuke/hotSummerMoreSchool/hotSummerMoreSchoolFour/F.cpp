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
#define rep0(i,n) for (int i = 0; i < (n); i++)
#define rep1(i,n) for (int i = 1; i <= (n); i++)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 3e5+100;
int nums[N];
struct  node
{   
    int value;
    int num;
    int lufei;
    /* data  */
}ticket[N];
bool cmp(node a,node b){
    return a.value>b.value;
}
void slove(){
    int n,k,c;
    ci n;
    ci k;
    ci c;
    for (int i = 1; i <= n; i++)
    {
        ci ticket[i].num;
    }
    rep1(i,n){
        ticket[i].value = ticket[i].num - (i-1)*c;
        ticket[i].lufei = (i-1)*c;
    }
    sort(ticket+1,ticket+1+n,cmp);
    int ans = 0;
    rep1(i,k){
        ans += ticket[i].num;
        ans -= ticket[i].lufei;
    }
    ans += (((k)*(k-1))/2)*c;
    ct ans en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}