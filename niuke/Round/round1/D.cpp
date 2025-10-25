#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int dp[200005][2];
int num[200005];
int main(void){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    dp[1][0]=dp[0][0] = dp[0][1] = 0;
    dp[1][1]=num[1];
    for(int i = 2;i<=n;i++){
        dp[i][0] = dp[i-1][1];
        dp[i][1] = dp[i-1][0]+num[i];
    }
    int ans = max(dp[n][0],dp[n][1]);
    cout<<ans<<endl;
}
//a b c d e f