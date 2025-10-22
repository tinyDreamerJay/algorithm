#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;
const int N = 1e5+5;
int a[N];
vector<int> pos[N];
int main(void){
    int n,q;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>n>>q)
    {   
        int max_val = 0;
        for(int i=0; i<N; i++) {
            pos[i].clear();
        }
        for (int i = 1; i <= n; i++)
        {   
            cin>>a[i];
            pos[a[i]].push_back(i);
            max_val = max(max_val, a[i]);
        }
        while (q--)
        {   
            int op, x;
            cin>>op>>x;
            
            if (op==1)
            {   
                n = n+1;
                a[n] = x;
                pos[x].push_back(n); 
                max_val = max(max_val, x);
            }
            else
            {   
                int start = x + 1;
                if (start > n) {
                    cout << 0 << endl;
                    continue;
                }
                
                int cnt = 0;
                for (int i = a[x]; i <= max_val; i += a[x])
                {
                    auto &v = pos[i];
                    auto it = lower_bound(v.begin(),v.end(),start);
                    cnt += v.end() - it;
                }
                cout<<cnt<<endl;
            }
        }
        
        cout << endl; 
    }
    
    return 0;
}