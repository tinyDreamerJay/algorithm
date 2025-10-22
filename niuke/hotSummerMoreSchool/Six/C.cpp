#include <iostream>  
#include <algorithm>  
#include <stack>
#define int long long
using namespace std;  
int mod = 998244353;
const int N = 5e5+100;
int num[N];
int n;
int cnt[N];
int calculate(int num[]){
stack<int> sta;
for (size_t i = 1; i <= n; i++)
{   
    while(!sta.empty() && sta.top() > num[i]){
    sta.pop();
    }
    sta.push(num[i]);
}
cnt[sta.size()]++;
return sta.size();
}
signed main()  
{  
    int res = 0;
    int T;
    cin>>T;
    while (T--)
    {
        cin >> n;
    for (int i = 1; i <= n; i++)
    {
        num[i] = i;
        cnt[i] = 0;
    }
    do  
    {   
        int tmp = calculate(num);
        res += (tmp*tmp*tmp)%mod;
    } while (next_permutation(num+1, num + n+1));  
    // cout << (res)%mod; 
    for (int i = 1; i <= n; i++)
    {
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
    }
    return 0;  
}
