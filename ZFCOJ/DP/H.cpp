#include<iostream>
#include<cmath>
using namespace std;
const int N = 1e5;
int dp[N][4];
int price[N];
//dp[N][0] 第一次买入
//dp[N][1] 第一次卖出
//dp[N][2] 第二次买入
//dp[N][3] 第二次卖出 
int main(void){
    int n;
    while (cin>>n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin>>price[i];
        }   
        dp[1][0] = -price[1];
        dp[1][1] = 0;
        dp[1][2] = -price[1];
        dp[1][3] = 0;
        for (int i = 2; i <= n; i++)
        {
            dp[i][0] = max(dp[i-1][0],-price[i]);
            dp[i][1] = max(dp[i-1][0]+price[i],dp[i]);
            
        }
    }
}