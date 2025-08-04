//问题 K: 基础算法练习-差分数组（一维差分模板题）
#include<iostream>
using namespace std;
const int N = 100005;
int a[N];
int diff[N];
int res[N];
int main(void){
    int n,m;
    while (cin>>n>>m)
    {   
        for (size_t i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        a[0] = 0;
        for (size_t i = 1; i <= n; i++)
        {   
            diff[i] = a[i] - a[i-1];
        }
        int l,r,c;
        while (m--)
        {   
            cin>>l>>r>>c;
            diff[l] += c;
            diff[r+1] -= c;
            
        }
        res[1] = diff[1];
        for (size_t i = 2; i <= n; i++)
        {   
            res[i] = res[i-1]+diff[i];
            /* code */
        }
        for (size_t i = 1; i <= n; i++)
        {   
            cout<<res[i]<<" ";
            /* code */
        }
        cout<<"\n";
    }
    
}