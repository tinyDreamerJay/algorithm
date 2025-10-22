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
    int a[N];
    int b[N];
    int IndexB[N];
    void slove(){
        int T;
        ci T;
        while (T--)
        {   
            int n;
            ci n;
            int k =0;
            int l1=0;
            int r1 = l1;
            int l2 = 0;
            int r2 = l2;
            rep0(i,n){
                ci a[i];
            }
            rep0(i,n){
                ci b[i];
                IndexB[b[i]] = i; 
            }
            while (l1<n)
            {   
                //a[l1] 
                //5
                // 3 4 2 1 5
                // 5 1 4 2 3
                l2 = IndexB[a[l1]];
                r2 = l2;
                int cnt = 0;
                while (r2<n)
                {
                    if(b[r2]==a[r1]){
                        r2++;
                        r1++;
                        cnt++;
                    }
                    else
                    {
                    l1 = r1; 
                    if(cnt != 0)
                    k++;
                    cnt = 0;
                    break;
                    }
                }
                if(cnt!=0){
                    k++;
                    l1 = r1;
                }
            }
            ct k en;
        }
    }
    signed main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        slove();
        r0;
    }