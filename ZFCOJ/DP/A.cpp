//问题 A: 基础算法练习-爬楼梯（二）
#include<iostream>
#include<cmath>
using namespace std;
const int N = 1e4+5;
int dp[N];
int energy[N];
int main(void){
    int n;
    while (cin>>n)
    {   
        energy[0]=0;
        for (size_t i = 1; i <= n-1; i++)
        {   
            cin>>energy[i];
        }
        for (size_t i = 2; i <= n; i++)
        {   
            dp[i] = min(dp[i-1]+energy[i-1],dp[i-2]+energy[i-2]);
        }
        cout<<dp[n]<<"\n";
    }
    
}