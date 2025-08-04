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
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 5e6+100;
bool is_Prime[N];
vector<int> Primes;
void aishisai(){
    is_Prime[1] = is_Prime[2] = true;
    for (int i = 0; i < N; i++)
    {   
        is_Prime[i] = true;
    }
    for (int i = 2; i < N; i++)
    {   
        if (is_Prime[i])
        {   
            Primes.push_back(i);
            for (int j = 2*i; j < N; j+=i)
            {
                is_Prime[i] = false;
            }
        }
    }
}
void slove(){
    int T;
    ci T;
    while (T--)
    {
        int n;
        ci n;
        vector<int> nums;
        if (n%2==1)
        {   
            ct "YES" en;
            continue;
        }
        map<int,int>mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {   
            int num;
            int x;
            ci num;
            x=num;
            if (is_Prime[x])
            {   
                mp[x]++;
            }
            else
            {   
                int len=0;
                int idx = Primes[len++];
                // cout<<idx<<" ";
                while (idx*idx<=x)
                {   
                    while (x%idx==0)
                    {   
                        mp[idx]++;
                        x /= idx;
                    }
                    idx = Primes[len++];
                }
                if (x!=0)
                {   
                    mp[x]++;
                }
            }
        }
        int cnt  =0 ;
        for(auto p:mp){
            cnt += p.second;
            // cout<<cnt<< " ";
        }
        // cout<<endl;
        if (cnt%2==0)
        {   
            ct "YES" en;
        }else
        {
            ct "NO" en;
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    aishisai();
	slove();
    r0;
}