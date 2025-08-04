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
const int N = 1e6+100;
int nums[N];
int pre[N];
int tong1[N];
int tong2[N];
void slove(){
    int T;
    ci T;
    while (T--)
    {   
        int n;
        ci n;
        rep0(i,2*n+10){
            tong1[i] = 0;
            tong2[i] = 0;
        }
        rep1(i,2*n){
            ci nums[i];
        }
        pre[0] = 0;
        rep1(i,2*n){
            pre[i] = nums[i]+pre[i-1];
        }
        rep1(i,2*n){
            int a;
            ci a;
            if (tong1[a]==0)
            {   
                tong1[a] = i;
            }else{
                tong2[a] = i;
            }
        }
        int ans = -1e18-1;
        rep1(i,n){
            int res = pre[tong2[i]]-pre[tong1[i]-1];
            ans = max(ans,res);
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