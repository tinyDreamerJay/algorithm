#include<iostream>
#include<iomanip>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int n,q;
    while (cin>>n>>q)
    {
        string s;
        cin>>s;
        while (q--)
        {
            string tmp;
            int a;
            cin>>tmp>>a;
            int cnt = 0;
            vector<int> nums;
            for (int i = 0; i < tmp.size(); i++)
            {   
                if (tmp[i]==s[i+a-1])
                {   
                    cnt++;
                }
                if (tmp[i]!=s[i+a-1])
                {   
                    if (cnt!=0)
                    {   
                        nums.push_back(cnt);
                    }
                    cnt = 0;
                }
            }
            if (cnt!=0)
            {   
                nums.push_back(cnt);
            }
            int ans = 0;
            for(auto num:nums){
                ans += (1+num)*num/2;
            }
            cout<<ans<<endl;
        }
    }
}