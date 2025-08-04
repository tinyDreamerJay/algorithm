#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
const int N = 1e6;
int a[N];
signed main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,beg;
        cin>>n>>beg;
        vector<int> nums;
        int vis = 0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            nums.push_back(a[i]);
            if (beg==i)
            {   
                vis = a[i];
                /* code */
            }
            
        }
        sort(nums.begin(),nums.end());
        auto endd = unique(nums.begin(),nums.end());
        
        int top = 0;
        vector<int>::iterator it_vis;
        for(auto it = nums.begin();it!=endd;it++){
            top = max(top,*it);
            if (vis==*it)
            {   
                it_vis = it;
                /* code */
            }
        }
        bool live = false;
        int water = 0;
        // for(auto it = it_vis;it!=endd;it++){
        //     cout<<*it<<" ";
        // }
        for(auto it = it_vis;it!=endd;it++){
            if (*it==top)
            {   
                live  = true;
                break;
                /* code */
            }
            auto ne = next(it);
            if(*ne-*it>*it-water){
                break;
            }
            // cout<<1<<" ";
            water += *ne-*it;
            if (*ne==top)
            {   
                live  = true;
                break;
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout<<a[i]<<" "
        // }
        // cout<<beg<<endl;
        if (live)
        {   
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
}