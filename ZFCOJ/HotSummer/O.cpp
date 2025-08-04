#include<iostream>
#include<unordered_map>
#define int long long
using namespace std;
const int N = 1e7+100;
unordered_map<int,int> dp;
int dfs(int x,int y){
    if (y<=x)
    {   
        dp[y] = x-y;
        return dp[y];
    }
    if (dp.find(y)!=dp.end())
    {   
        return dp[y];
    }
    int res;
    if(y%2==0){
        res = min(dfs(x,y/2)+1,y-x);
    }else{
        int step1  = dfs(x,y+1)+1;
        int step2  = dfs(x,y-1)+1;
        res = min(step1,step2);
    }
    dp[y] = res;
    return dp[y];
}
signed main(){
    int x,y;
    while (cin>>x>>y)
    {   
        dp.clear();
        dfs(x,y);
        cout<<dp[y]<<endl;
    }
}