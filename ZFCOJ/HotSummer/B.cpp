#include<iostream>
#define int unsigned long long
using namespace std;
int mod = 1e9+7;
signed main( ){
    int n;
    while (cin>>n)
    {
        if (n==2)
        {
            cout<<"20"<<endl;
        }else
        {    int n2 = ((n%mod)*(n%mod))%mod;
             int sum = (((1+n2)*n2)%mod*2)%mod;
             int jian = (8*n*n-14*n+16+mod)%mod;
             sum = (sum - jian)%mod;
             cout<<sum<<endl;                                                                                                                                                                     
        }
    }
}