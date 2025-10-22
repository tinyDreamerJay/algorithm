#include<iostream>
#include<cmath>
using namespace std;
#define int long long
const int N=1e6+10;
int a[N];
int gcd[N];
int sum[N];
int n;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin>>n;
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        Max = max(Max,a[i]);    
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sqrt(a[i]); j++)
        {
            if (a[i]%j==0)
            {   
                gcd[j]++;
                sum[j] += a[i];
                if (j!=a[i]/j)
                {   
                    gcd[a[i]/j]++;
                    sum[a[i]/j]+=a[i];
                }
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= Max; i++)
    {
        res = max(res,i*sum[i]);
    }
    cout<<res<<"\n";
}