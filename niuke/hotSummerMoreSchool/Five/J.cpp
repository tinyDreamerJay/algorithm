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
const int N = 2e5+100;
int n,m;
// void dfs(int x,int y,int step){
//     int nextx;
//     nextx = x-1;
//     if(nextx<0||nextx>=n||nexty>=m||nexty<0){
//         return;
//     }
//     dfs(nextx,y,step+1);
//     dis[nextx][y] = dis[x][y]+1;;
//     nextx = x+1;
//     if(nextx<0||nextx>=n||nexty>=m||nexty<0){
//         return;
//     }
//     dfs(nextx,y,step+1);
//     dis[nextx][y] = dis[x][y]+1;;
//     int nexty;
//     nexty = y-1;
//     if(nextx<0||nextx>=n||nexty>=m||nexty<0){
//         return;
//     }
//     dfs(x,nexty,step+1);
//     dis[x][nexty] = dis[x][y]+1;
//     nexty = y+1;
//     if(nextx<0||nextx>=n||nexty>=m||nexty<0){
//         return;
//     }
//     dfs(x,nexty,step+1);
//     dis[x][nexty] = dis[x][y]+1;
// }

void slove(){
    ci n;
    ci m;
    int be1,en1;
    be1 = 0;
    en1 = 0;
    vector<vector<int>> mp(n, vector<int>(m));
    vector<vector<int>> dis1(n, vector<int>(m, 0));
    vector<vector<int>> dis2(n, vector<int>(m, 0));
    vector<vector<int>> dis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   
            int a;
            ci a;
            mp[i][j]= a;
            dis[i][j] = 0;
            if (a==1)
            {   
                be1 = i;
                en1 = j;
            }
        }
    }
    //be2 en2 calcute
    double be2,en2;
    double zhongx,zhongy;
    zhongx = ((double)n-1)/2;
    zhongy = ((double)m-1)/2;
    int tx = zhongx*2-be1;
    int ty = zhongy*2-be2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dis1[i][j] = abs(i-be1)+abs(j-en1);
            dis2[i][j] = abs(i-tx)+abs(j-ty);
            dis[i][j] = min(dis1[i][j],dis2[i][j]);
            if(dis[i][j]>ans){
                ans = dis[i][j];
            }
        }
    }
    ct ans;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}   