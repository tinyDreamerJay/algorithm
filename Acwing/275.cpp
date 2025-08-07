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
const int N = 100;
int dp[N+N][N][N];
//定义一个参数，第一个为k记录坐标x和坐标y的总和，第二个为x1记录第一条路径的x坐标，第三个为x2记录第二条路径的x坐标
int nums[N][N];
//用作map，让用户直接访问坐标x，y中的具体数值
void slove(){
    int n;
    ci n;
    int m;
    ci m;
    rep1(i,n){
        rep1(j,m){
            ci nums[i][j];
        }
    }
    int k,x1,x2;
    for (int k = 2; k <= n+m; k++)
        for(int x1 = max(1LL,k-m);x1<= min(k-1,n);x1++)
            for(int x2 = max(1LL,k-m);x2<=min(k-1,n);x2++){
                int y1 = k-x1;
                int y2 = k-x2;
                    int tmp = nums[x1][y1];
                    if(x1!=x2) tmp += nums[x2][y2];
                    int &Status = dp[k][x1][x2];
                    Status = max(dp[k-1][x1-1][x2-1]+tmp,dp[k-1][x1][x2]+tmp);
                    Status = max(Status,dp[k-1][x1-1][x2]+tmp);
                    Status = max(Status,dp[k-1][x1][x2-1]+tmp);
            }
        ct dp[n+m][n][n] en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}