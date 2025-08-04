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
int A[N];
int B[N];
void slove(){
    int n;
    ci n;
    for (int i = 0; i < n; i++)
    {
        ci nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = i+1+nums[i];
        B[i] = i+1-nums[i];
    }
    sort(A,A+n);
    sort(B,B+n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {   
        cnt += upper_bound(A,A+n,B[i])-lower_bound(A,A+n,B[i]);
    }
    ct cnt;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}