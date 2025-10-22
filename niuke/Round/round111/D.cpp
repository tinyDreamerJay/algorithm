#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int> cnt(11);
    string s;
    vector<pair<int,int>> a(n);
    int ans = 0;
    for(int i = 0;i<n;i++){
        cin>>s;
        reverse(s.begin(),s.end());
        int cur = 0;
        for(int j = 0;j<s.size();j++){
            if(j%2==0){
                cur += s[j]-'0';
            }else{
                cur -= s[j]-'0';
            }
        }
        cur = (cur%11+11)%11;
        if(s.size()%2==0){
            ans += cnt[(11-cur)%11];
        }else{
            ans += cnt[cur];
        }
        cnt[cur]++;
        a[i]={cur,s.size()%2};
    }
    for(int i = 0;i<11;i++){
        cnt[i] = 0;
    }
    for(int i = n-1;i>=0;i--){
        auto [cur,op] = a[i];
        if(op==0){
            ans += cnt[(11-cur)%11];
        }else{
            ans += cnt[cur];
        }
        cnt[cur]++;
    }
    cout<<ans<<endl;
}