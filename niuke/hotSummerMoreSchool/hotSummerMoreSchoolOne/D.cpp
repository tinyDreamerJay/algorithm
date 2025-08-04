#include<iostream>
#include<map>
#include<vector>
#define endl "\n"
#define int long long
using namespace std;
vector<int>Prime;
vector<bool> is_Prime;
map<int,int> mp;
void LCM(){
    int MaxSize = 1e5+1000;
    is_Prime.resize(MaxSize,true);
    is_Prime[0] = is_Prime[1] = false;
    for(int i=2;i<=MaxSize;i++){
        if(is_Prime[i]){
            Prime.push_back(i);
            for(int j = i*i;j<=MaxSize;j+=i){
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
    int mod;
    cin>>n>>mod;
    LCM();
    for (int i = 1; i <= n; i++)
    {   
        int x = i;
        for(auto p:Prime){
            if (p*p>x)
            {   
                break;
            }
            if (x%p==0)
            {   
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
        if (x>1)
        {   
            if(mp[x]<1)
            mp[x] = 1;
        }
           
    }
    int res = 1;
    for(const auto& p:mp){
        for (int i = 0; i < p.second; i++)
        {
            res = (res*p.first)%mod;   
        }
    }
    cout<<res<<endl;
}