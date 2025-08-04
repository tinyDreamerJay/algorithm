#include<iostream>
#include<map>
#define int long long
using namespace std;
const int N = 2e5+10;
int nums[N];
signed main(){
    int T;
    while (cin>>T)
    {
        while (T--)
        {
            int n,q;
            cin>>n>>q;
            map<int,int>mp;
            for (int i = 1; i <= n; i++)
            {
                cin>>nums[i];
                mp[nums[i]]++;
            }
            auto it = mp.begin();
            int lef = 0;
            int limi = n/2;
            while(it!=mp.end()&&n-lef-it->second>=limi){
                lef += it->second;
                it=next(it);
            }
            for(int i=0;i<q;i++){
                int u,v;
                cin>>u>>v;
                if (nums[u]<it->first)
                {   
                    lef--;
                }
                mp[nums[u]]--;
                nums[u] += v;
                if (nums[u]<it->first)
                {   
                    lef++;
                }
                mp[nums[u]]++;
                while (it!=mp.end()&&n-lef-it->second>=limi)
                {   
                    lef += it->second;
                    it = next(it);
                }
                cout<<lef<<endl;
            }
        }
    }
}