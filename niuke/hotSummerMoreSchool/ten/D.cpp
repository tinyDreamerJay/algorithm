#include<iostream>
#define int unsigned long long
using namespace std;
const int mod=998244353;
int ksm(int a,int b){
    int ans=1;
    while(b){
        if(b&1){
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b=b/2;
    }
    return ans%mod;
}
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        if(n<4){
            cout<< "0" <<"\n";
            continue;
        }
        int num=(n/4)%mod; 
        cout<<ksm(2,num)%mod<<"\n";
    } 
}