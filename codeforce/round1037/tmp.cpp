#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#define int long long
using namespace std;
const int N = 1e6;
int a[N];
signed main(){
    int T;
    cin>>T;
    while (T--)
    {   
        int n;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        auto endd = unique(a+1,a+n+1);
      
    }
}