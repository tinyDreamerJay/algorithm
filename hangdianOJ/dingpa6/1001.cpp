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
    const int N = 2e5+100;
    int nums[N];
    void slove(){
        int T;
        ci T;
        while (T--)
        {   
            int n;
            ci n;
            for (int i = 0; i < n; i++)
            {
                ci nums[i];   
            }
            int cnt0 = 0;
            for (int i = 0; i < n; i++)
            {
                if(nums[i]==0){
                    cnt0++;
                }
            }
            int ans =0;
            int Maxfushu = -1e9-1;
            int Minzhengshu = 1e9+1;
            int fushu = 0;
            for (int i = 0; i < n; i++)
            {   
                if (nums[i]<0)
                {   
                    fushu++;
                }
                if (nums[i]<0&&nums[i]>Maxfushu)
                {   
                    Maxfushu = nums[i];
                }
                if (nums[i]>0&&nums[i]<Minzhengshu)
                {   
                    Minzhengshu = nums[i];
                }
            }

            if(fushu%2==1){
                if (cnt0==0)
                {
                    if (Minzhengshu<=abs(Maxfushu))
                    {   
                        ans =Minzhengshu+1;
                    }else
                    {
                        ans =abs(Maxfushu)+1;
                    }
                }
                else
                {
                    ans =cnt0;
                }
            } 
            else
            {
                ans = cnt0;
            }
            ct ans en;
        }
    }
    signed main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        slove();
        r0;
    }