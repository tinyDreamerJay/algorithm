#include<iostream>
#include<cmath>
#define endl "\n"
// 5 1 2 3 4 7 6
//1 2 3 4 5 6
//1 2 5 3 4 7 6
#define int long long
using namespace std;
const int N = 2e6+10;
int num[N];
int idx[N];
signed main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while (T--)
    {   
        int n;
        cin>>n;
        if (n==1)
        {   
            cout<<"1"<<endl;
            continue;
        }
        
        for (int i = 1; i <= n; i++)
        {
            cin>>num[i];
            idx[num[i]] = i;
        }
        int l,r;
        l = r =idx[n];
        int ans = 0;
        for (int i = n-1; i >=2; i--)
        {   
            l = min(idx[i],l);
            r = max(idx[i],r);
            ans = max(ans,(r-l+1)-(n-i-1));
        }
        cout<<ans<<endl;
    }
}