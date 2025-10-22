#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e6;
int a[N];
signed main(){
    int T;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while (T--)
    {   
        int n,k;
        cin>>n>>k;
        int cnt0 = 0;
        vector<int> zero;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]==0)
            {   
                cnt0++;
            }else
            {   
                zero.push_back(cnt0);
                cnt0=0;
            }
        }
        if (cnt0!=0)
        {   
            zero.push_back(cnt0);
        }
        int ans = 0;
        for(auto num:zero){
            num++;
            ans += num/(k+1);
        }
        cout<<ans<<endl;
    } 
}