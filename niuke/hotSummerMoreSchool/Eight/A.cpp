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
    const int N = 1e5+100;
    void solve(){
        int T;
        ci T;
        while (T--)
        {   
            string n;
            ci n;
            int firstNum = -1;
            bool f = false;
            if(n[0]-'0'==0){
                ct "10" en;
                continue;
            }
            if(n[0]=='-'){
                int idx = 1;
                while (idx<n.size())
                {   
                    if(n[idx]-'0'>1){
                        n.insert(idx,"1"),f = true;
                        break;
                    }
                    idx++;
                }
                if(!f)
                {
                    n = n+"1";
                }
            }else
            {   
                int idx = 0;
                while (idx<n.size())
                {   
                    if(n[idx]-'0'==0){
                        n.insert(idx,"1"),f = true;
                        break;
                    }
                    idx++;
                }
                if(!f)
                {
                    n = n+"1";
                }
            }
            ct n en;
        }
    }
    signed main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        solve();
        r0;
    }