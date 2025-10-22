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

    void solve() {
        int T;
        ci T;
        while (T--) {   
            int n, m;
            ci n >> m;
            string s, t;
            ci s >> t;
            int cnt = 0;
            if((s[0]=='1'&&t[0]!=s[0])||(s[n-1]=='1'&&t[m-1]!=s[n-1])){
			cout<<"-1\n";
			continue;
		    }
                for (int i = 0; i <= s.size()-t.size(); i++)
                {   
                    if(s[i]=='1'){
                        for (int j = 0; j < t.size(); j++)
                        {
                            s[i+j] = ((s[i+j]-'0')^(t[j]-'0'))+'0';
                        }
                        cnt++;   
                    }
                }
            int flag = 0;
            rep0(i,n){
                if (s[i]=='1')
                {   
                    flag = 1;  
                }
            }
            if(flag==0)
            ct cnt en;
            else
            ct "-1" en;
        }
    }

    signed main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        solve();
        r0;
    }