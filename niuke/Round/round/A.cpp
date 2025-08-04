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
const int N = 1e5+100;
int n;
int cnt = 0;
vector<int> nums;
void dfs(int step){
    if(step==n){
        bool f = true;
        for(int i = 0;i<n-1;i++){
            if(nums[i]==0&&nums[i+1]==0){
                f = false;
            }
            if(nums[i]==1&&nums[i+1]==0){
                f = false;
            }
        }
        if(f)
        cnt++;
        return;
    }
    nums.push_back(1);
    dfs(step+1);
    nums.pop_back();
    nums.push_back(0);
    dfs(step+1);
    nums.pop_back();
}
void slove(){
    ci n;
    if(n==1){
        ct 2;
        return;
    }else if(n==2){
        ct 2;
        return;
    }
    dfs(0);
    ct cnt en;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}