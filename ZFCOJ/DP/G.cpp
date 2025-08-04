#include<iostream>
#include<cmath>
using namespace std;
const int N = 1e5+5;
int value[N];
int dp[N][2];
//dp[N][1] buy
//dp[N][0] seil
int main(void){
    int n;
    while (cin>>n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin>>value[i];
        } 
        // dp[N][0] 不持有股票 
        // dp[N][1] 持有股票
        // dp[N][1] -> dp[N][0] 卖出股票 dp[N-1][1]+value[i];不卖 dp[N-1][1];
        // dp[N][0] -> dp[N][1] 买入股票 dp[N-1][0]-value[i];不买 dp[N-1][0];
        dp[1][0] = 0;
        dp[1][1] = -value[1];
        for (int i = 2; i <= n; i++)
        {       
            dp[i][1] = max(dp[i-1][0]-value[i],dp[i-1][1]);
            dp[i][0] = max(dp[i-1][1]+value[i],dp[i-1][0]);
        }
        cout<<dp[n][0]<<endl;
    }
}