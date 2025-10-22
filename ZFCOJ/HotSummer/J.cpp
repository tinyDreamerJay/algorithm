#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int N =  2e5+5;
int MOD = 1e9+7;
int dp[9];
int tmp[9];
int main(void){
    string s;
    
    while (cin>>s)
    {   
        for (size_t i = 0; i < 9; i++)
        {   
            dp[i] = 0;
            tmp[i] = 0;
            /* code */
        }
        
        dp[0] = 1;
        s = " "+s;
        for (int i = 1; i < s.size(); i++)
        {
            int a = s[i]-'0';
            memcpy(tmp,dp,sizeof(tmp));
            for (int j = 0; j < 9; j++)
            {
                dp[(j+a)%9] = (dp[(j+a)%9]+tmp[j%9])%MOD;
            }
        }
        cout<<dp[0]-1<<endl;
    }
}