#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1000005;
int a[N];
int res[N];
int diff[N];
int main(void){
    int n,m;
    cin>>n>>m;
    for (size_t i = 1; i <= n; i++)
    {   
        a[i] = 0;
        diff[i] = 0;
    }
    int l,r;
    while (m--)
    {   
        cin>>l>>r;
        diff[l]++;
        diff[r+1]--;
    }
    res[1] = diff[1];
    for (size_t i = 2; i <=n; i++)
    {   
        res[i] = res[i-1]+diff[i];
    }
    int cnt = res[1];
    for (size_t i = 1; i <= n; i++)
    {   
        cout<<res[i]<<" ";
        if (res[i]<cnt)
        {   
            cnt = res[i];
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
}