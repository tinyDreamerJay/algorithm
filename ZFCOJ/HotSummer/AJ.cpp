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
void solve(){
    int n;
    int k;
    while (cin>>n>>k)
    {   
        int t;
        int cnt = 0;
        int sum = 0;
        bool f = false;
        priority_queue<int> q;
        rep0(i,n){
            ci t;
            if(t>=0){
                sum += t;
                cnt++;
            }
            else
            {
                t = -t;
                if(!f){
                    if(k-t>=0&&sum-t>=0){
                        sum -= t;
                        k -= t;
                        cnt++;
                        q.push(t);
                    }else{
                        if(!q.empty()&&t<q.top()){
                            k += q.top();
                            k -= t;
                            q.pop();
                            q.push(t);
                        }
                        f = true;
                    }
                }
                else
                {
                    if(k-t>=0){
                        k -= t;
                        cnt++;
                        q.push(t);
                    }else{
                        if(!q.empty()&&t<q.top()){
                            k += q.top();
                            k -= t;
                            q.pop();
                            q.push(t);
                        }
                    }
                }
            }
        }
        ct cnt en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}