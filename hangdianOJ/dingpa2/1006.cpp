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
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e6+100;
int match1[N];
int match2[N];
int idx1[N];
int idx2[N];
int same[N];
bool vis[N];
int tong1[N];
int tong2[N];
int res[N];
bool vis22[N][N];
void slove(){
    int T;
    ci T;
    while (T--) {
        int n;
        ci n;
        for (int i = 0; i < n+10; i++)
        {
            same[i] = 0;
            tong1[i] = 0;
            tong2[i] = 0;
            vis[i] = false;
        }
        for(int i=1;i<=n;i++){
            ci match1[i];
            idx1[match1[i]] = i;
        }
        for(int i=1;i<=n;i++){
            ci match2[i];
            idx2[match2[i]] = i;
        }
        for(int i=1;i<=n;i++){
            same[i] = same[i-1]; 
            tong1[match1[i]]++;
            tong2[match2[i]]++;
            if (tong1[match2[i]]>0&&vis[match2[i]]==false)
            {   
                vis[match2[i]]=true;
                same[i]++;            
            }
            if (tong2[match1[i]]>0&&vis[match1[i]]==false)
            {   
                vis[match1[i]]=true;
                same[i]++;
            }
            // cout<<same[i]<<" ";
        }
        for (int i = 1; i <= n; i++)
        {   
            int ans = 0;
            ans = idx1[i]-1 + idx2[i]-1;
            int jian = min(idx1[i],idx2[i]);
            int cnt =0;
            if(idx1[i]<idx2[i])
            for (int j = idx1[i]+1; j < idx2[i]; j++)
            {
                for (int k = 1; k < idx1[i]; k++)
                {
                    if(match1[k]==match2[j]){
                        cnt++;
                        continue;
                    }
                }
            }
            else
            for (int j = idx2[i]+1; j < idx1[i]; j++)
            {
                for (int k = 1; k < idx2[i]; k++)
                {
                    if(match2[j]==match1[k]){
                        cnt++;
                        continue;
                    }
                }
            }
            ans -= same[jian-1]; 
            ans -= cnt;
            if(ans>n){
                ans = n-1;
            }
            res[i] = ans;
        }
        for (int i = 1; i <= n; i++)
        {
            ct res[i];
            if (i!=n)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
};
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}
// 2
// 7
// 6 7 5 4 3 1 2
// 3 7 4 6 2 1 5