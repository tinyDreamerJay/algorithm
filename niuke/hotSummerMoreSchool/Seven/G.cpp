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
const int N = 1e6+100;
bool Odd[N];
vector<int>Prime;
vector<bool> is_Prime;
map<int,int> mp;
bool res[N];

void Sieve(){
    int MaxSize = 1e6+10;
    is_Prime.resize(MaxSize,true);
    is_Prime[0] = is_Prime[1] = false;
    for(int i=2;i<MaxSize;i++){
        if(is_Prime[i]){
            Prime.push_back(i);
            for(int j = i*i;j<MaxSize;j+=i){
                if(j<MaxSize)
                    is_Prime[j] = false;
            }
        }
    }
}

void solve(){
    int T;
    ci T;
    
    rep1(i,1e6){
        if(i%2 == 0){
            int root = sqrt(i);
            if(root*root != i)
                Odd[i] = true;
            else
                Odd[i] = false;
        } else {
            Odd[i] = false;
        }
    }
    
    rep1(i,1e6){
        res[i] = (Odd[i] || is_Prime[i]);
    }
    
    while (T--)
    {   
        int cnt = 0;
        int n;
        ci n;
        int target = n / 2;
        rep1(i,n){
            if(res[i]){
                ct i ;
                cnt++;
                if(cnt!=target){
                    ct " ";
                }
                if(cnt == target){
                    break;
                }
            }
        }
        cout en;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Sieve();
    solve();
    r0;
}
    