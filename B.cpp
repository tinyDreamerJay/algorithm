#include<iostream>
#include<string>
using namespace std;
int nums[10005];
int dp[10005];
int f(int num) {
    int cnt = 0;
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        cnt += s[i] - '0';
    }
    dp[num] = cnt;
    return dp[num];
}
int main(void){
    int n;
    cin>>n;
    int res = 1;
    dp[0] = dp[1] = 1;
    for(int i = 2;i<=n;i++){
        res += f(res);
    }
    cout<<res;
}