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
int cnt(vector<pair<int,int>>& interval){
    if(interval.empty()) return 0;
    sort(interval.begin(),interval.end());
    int currentStart = interval[0].first;
    int currentEnd = interval[0].second;
    int total = 0;
    for(int i = 0;i<interval.size();i++){
        if(interval[i].first<=currentEnd+1){
            currentEnd = max(currentEnd,interval[i].second);
        }else{
            total += currentEnd-currentStart+1;
            currentStart = interval[i].first;
            currentEnd = interval[i].second;
        }
    }
    total += currentEnd-currentStart+1;
    return total;
}
void solve(){
    int n,m;
    int q;
    while (cin>>n>>m>>q)
    {   
        vector<pair<int,int>> rows,columns;
        rep0(i,q){
            int t;
            ci t;
            int start,end;
            ci start;
            ci end;
            if(t==1){
                rows.push_back({start,end});
            }else{
                columns.push_back({start,end});
            }
        }
        int totalRows = cnt(rows);
        int totalColumns = cnt(columns);
        int ans = (m-totalRows)*(n-totalColumns);
        ct ans en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}