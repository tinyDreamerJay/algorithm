#include<iostream>
#include<cmath>
#include<unordered_map>
#include<cstring>
#include<cstdio>
#include<vector>
#define int long long
using namespace std;
const int N = 1e5+5;
const int MaxSeieve = 32000;
int mod = 998244353;
vector<bool> is_Prime;
vector<int> Prime;
unordered_map<int,int>mp;
//sifting
void sieve(){
    is_Prime.resize(MaxSeieve+1,true);
    is_Prime[0]=is_Prime[1]=false;
    for (size_t i = 2; i <= MaxSeieve; i++)
    {   
        if (is_Prime[i]) {
            Prime.push_back(i);
            for (int j = i * i; j <= MaxSeieve; j += i) {
                is_Prime[j] = false;
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    sieve();
    for (int i = 1; i <= n; i++)
    {   
        int x;
        cin>>x;
        for(int p:Prime){
            if (p*p>x)
            {   
                break;
                /* code */
            }
            if(x%p==0){
                int cnt = 0;
                while (x%p==0)
                {   
                    cnt++;
                    x/=p;
                }
                if (mp[p]<cnt)
                {   
                    mp[p] = cnt;
                } 
            }
        }
        if(x>1){
            if (mp[x]<1)
            {
                mp[x] = 1;
            }
        }
    }
    //Traverl index array
    int res = 1;
    for (const auto& pair:mp)
    {
        for (size_t i = 0; i < pair.second; i++)
        {   
            res = (res*pair.first)%mod;
        }
    }
    cout<<res;
}