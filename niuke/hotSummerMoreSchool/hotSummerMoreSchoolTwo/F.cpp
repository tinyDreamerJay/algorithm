#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
#define endl "\n"
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while (T--)
    {   
        vector<int> nums;
        int n,t;
        cin>>n>>t;
        string s;
        cin>>s;
        int first1 = 0;
        bool first_1 = false;
        int last1 =0; 
        int cnt1 =0;
        for (int i = 0; i < s.size()-1; i++)
        {       
            while (s[i]=='1'&&s[i+1]=='1')
            {   
                s.erase(i,1);
            }
        }
        n = s.size();
        for (int i = 0; i < n; i++)
        {   
            if (s[i]=='1')
            {   
                cnt1++;
            }
            if (!first_1&&s[i]=='1')
            {   
                first1 = i;
                first_1 = true;
            }
            if (first_1&&s[i]=='1')
            {   
                last1 = i;
            }
        }
        if (last1==first1)
        {   
            nums.push_back(n-1);
        }else
        {
            nums.push_back(n-(last1-first1+1));
            int cnt0 = 0;
            for (int i = first1; i <= last1; i++)
            {
                if (s[i]=='1')
                {   
                    nums.push_back(cnt0);
                    cnt0 = 0;
                }
                else
                {
                    cnt0++;
                }
            }
        }
        int ans = 0;
        sort(nums.begin(),nums.end());
        // for(auto num:nums){
        //     cout<<num<<" ";
        // }
        int Max = nums.back();
        nums.pop_back();
        // cout<<Max<<endl;
        ans = Max-1-t;
        for(auto num:nums){
            if (num>2*t)
            {   
                ans += num-2*t;
            }
        }
        if(ans<0){
            ans = 0;
        }
        cout<<ans<<endl;
    }
}