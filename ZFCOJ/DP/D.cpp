#include<iostream>
#define int long long
using namespace std;
const int N = 25;
bool map[N][N];
int dp[N][N];
signed main(){
    int n,m;
    while (cin>>n>>m)
    {   
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {   
                map[i][j] = false;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {   
                dp[i][j] = 0;
                int num;
                cin>>num;
                if (num==1)
                {   
                    map[i][j] = false;
                    /* code */
                }
                else
                {
                    map[i][j] = true;
                }
            }
        }
        dp[1][1] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (map[i][j])
                {   
                    if(i!=1 || j!=1)  dp[i][j] = dp[i-1][j]+dp[i][j-1];
                    /* code */
                }
            }
        }
        
        cout<<dp[n][m]<<endl;
    }
}