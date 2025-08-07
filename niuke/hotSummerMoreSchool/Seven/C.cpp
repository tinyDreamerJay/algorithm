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
int nums[N];
int res[N];
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
        res[n-1] = nums[n-1];
        for (int i = n-1; i >= 1; i--)
        {
            if(nums[i-1]>res[i]){
                res[i-1] = res[i];
            }
            else
            {
                res[i-1] = nums[i-1];
            }
        }
        int Max = -1;
        for (int i = 0; i < n; i++)
        {
            Max = max(Max,nums[i]-res[i]);
        }
        ct Max en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}