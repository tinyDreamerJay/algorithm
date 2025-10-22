#include "bits/stdc++.h"
#define endl "\n"
#define int long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define xx first
#define yy second
#define f1(i,n) for(int i = 1;i <= n;i++)
#define f(i,n) for(int i = 0;i < n;i++)
using namespace std;
const int N = 1e6 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;
int a[N],pre[N];
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    
    while(cin >> n >> k){
    	int cnt = 0;
    	int sum = 0;
    	bool flag = false;
    	priority_queue<int> pq;
    	for(int i = 0;i < n;i++){
	    	int t;cin >> t;
	    	if(t >= 0){
    			cnt++;
    			sum += t;
			}else{
				t = -t;
				if(!flag){
					if(k - t >= 0 && sum - t >= 0){
						pq.push(t);
						k -= t;
						sum -= t;
						cnt++;
					}else{
						if(!pq.empty() && t < pq.top()){
							k += pq.top();
							sum += pq.top();
							k -= t;
							pq.pop();
							pq.push(t);
						}
                        if(sum-t<0)
						flag = true;
					}
				}else{
					if(k - t >= 0&&!pq.empty()){
						pq.push(t);
						k -= t;
						cnt++;
					}else{
						if(!pq.empty() && t < pq.top()){
							k += pq.top();
							k -= t;
							pq.pop();
							pq.push(t);
						}
					}
				}
			} 
		}		
		cout << cnt << endl;
	}
	    
    return 0;
}