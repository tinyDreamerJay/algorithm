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
int stone[N];
void solve(){
    int L;
    int n;
    int m;
    while (cin>>L>>n>>m)
    {   
        rep1(i,n){
            ci stone[i];
        }
        stone[n+1] = L; 
        sort(stone+1,stone+n+1);
        int l=1;
        int r=L;
        int ans = 0;
        while (l<=r)
        {
            int mid = (l+r)/2;
            int cnt =0;
            int last = 0;
            rep1(i,n+1){
                if(mid>stone[i]-last){
                    cnt++;
                    if(cnt>m){
                        break;
                    }
                }else
                {
                    last = stone[i];
                }
            }
            if(cnt<=m){
                ans = mid;
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        ct ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}