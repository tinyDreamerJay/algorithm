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
void slove(){
    int n;
    ci n;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        ci nums[i];
        if (nums[i]%2==0)
        {
            even++;
        }else
        {
            odd++;
        }
    }
    ct (odd*even)%998244353 en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}