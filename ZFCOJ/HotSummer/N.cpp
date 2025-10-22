#include<iostream>
#include<algorithm>
#include<queue>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5+10;
struct node
{
    int e;
    int m;
}Order[N];
bool cmp(node a,node b){
    return a.e<b.e;
}
signed main(void){
    int T;
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    while (cin>>T)
    {
        while (T--)
        {   
            int n;
            cin>>n;
            for (int i = 0; i < n; i++)
            {
                cin>>Order[i].e;
            }
            int tot=0;
            for (int i = 0; i < n; i++)
            {
                cin>>Order[i].m;
                tot += Order[i].m;
            }
            sort(Order,Order+n,cmp);
            priority_queue<int,vector<int>,greater<int>>q;
            
            for (int i = 0; i < n; i++)
            {
                if(q.size()<Order[i].e){
                    q.push(Order[i].m);
                }else{
                    if(!q.empty()&&Order[i].m>q.top()){
                        q.pop();
                        q.push(Order[i].m);
                    }
                }
            }
            int deal=0;
            while (!q.empty())
            {
                deal+=q.top();
                q.pop();
            }
            cout<<tot-deal<<endl;
        }
    }
}