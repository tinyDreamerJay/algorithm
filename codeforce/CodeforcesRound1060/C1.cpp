#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
const int N = 2e5+100;
vector<vector<int>> pre(N+1);
int main()
{
	int t;
	cin>>t;
    for(int i = 2;i<=N;i++){
        if(!pre[i].empty()) continue;
        for(int j = i;j<=N;j+=i){
            pre[j].push_back(i);
        }
    }
	while(t--){
		map<int,int> count;
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int ans = 2;
        for(int i = 0;i<n;i++){
        	for(int p : pre[a[i]]){
        		    if(count[p]>0)
        			ans = 0;
        			count[p]++;
        	}
        }
        for(int i = 0;i<n;i++){
            for(int p:pre[a[i]]){
                count[p]--;
            }
            for(int p:pre[a[i]+1]){
                if(count[p]>0){
                    ans = min(ans,1);
                }
            }
            for(int p:pre[a[i]]){
                count[p]++;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
