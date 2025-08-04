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
const int N = 2e5+100;
const int mod=998244353;
int nums[N];
void slove(){
    int T;
    ci T;
    while (T--)
    {   
        int n;
        ci n;
        rep0(i,n){
            ci nums[i];
        }
        int Max = 0;
        rep0(i,n){
            Max += nums[i];
        }
        int l = 1;
        rep0(i,n){
            if(nums[i]==0){
                l++;
            }else{
                break;
            }    
        }
        int r = 1;
        for (int i = n-1; i >=0; i--)
        {
            if(nums[i]==0)
            r++;
            else
            break;
        }
        int lr;
        int LR;
        if(Max==0){
            lr = ((n+1)*n/2)%mod;
            LR = ((n+1)*(n+1))%mod;
            ct "0 "<<(lr*LR)%mod en;
            continue;
        }else{
            lr = (l*r)%mod;
        }
        int maxx = 0;
        int Min = 2e5+10;
        rep0(i,n){
            if(nums[i]==0) continue;
            if(nums[i]<Min){
                Min = nums[i];
            }
            if(nums[i]>maxx){
                maxx = nums[i];
            }
        }
        LR = ((n-maxx+1)*(n+Min+1))%mod;
        int ans = (lr*LR)%mod;
        ct Max <<" "<<ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}