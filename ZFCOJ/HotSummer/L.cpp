#include<iostream>
#include<cmath>
#define int long long
using namespace std;
const int N = 1e5+5;
int most[N];
int have[N];
signed main(void){
    int n,m;
    int Max;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin>>n>>m)
    {   
        Max = 1e18+5;
        for (int i = 1; i <= n; i++)
        {
            cin>>have[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin>>most[i];   
            Max = min(most[i],Max);
        }
        int l = 0;
        int r = 1e18+5;
        int ans = 0;
        while (l<=r)
        {
            int mid = (l+r)/2;
            int cnt = 0;
            bool vis = true;
            for (int i = 1; i <= n; i++)
            {   
                if(mid<=have[i]) continue;
                int need = mid - have[i];
                if (need > most[i]) {
                    vis = false;
                    break;
                }
                if (cnt + need>m)
                {   
                    vis = false;
                    break;
                }
                cnt += need;
            }
            if (cnt<=m&&vis)
            {   
                ans = mid;
                l = mid+1;
            }else
            {
                r = mid-1;
            }
        }
        cout<<ans<<"\n";
    }
}