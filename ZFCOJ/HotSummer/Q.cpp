#include<iostream>
#include<queue>
#include<vector>
#define int long long
#define endl "\n"
using namespace std;
const int N =1e6+10;
bool vis[N];
int bfs(int beg,int n,int k){
    queue<pair<int, int>> q;
    q.push({beg,0});
    vis[0] = true;
    int Max = 0;
    int nums =0;
    while (!q.empty()&&nums<n)
    {   
        if (nums==n)
        {   
            break;
            /* code */
        }
        
        auto cur = q.front();
        auto now = cur.first;
        auto cnt = cur.second;
        q.pop();
        //把两个变化推入进去
        //检查vis数组
        //false就push和最大值比较
        int tmp = (now+k)%n;
        if (vis[tmp]==false)
        {   
            q.push({tmp,cnt+1});
            nums++;
            vis[tmp] = true;
            /* code */
        }
        tmp = (now + 1)%n;
        if (vis[tmp]==false)
        {   
            q.push({tmp,cnt+1});
            nums++;
            vis[tmp] = true;
            /* code */
        }
        if (Max<cnt)
        {   
            Max = cnt;
            /* code */
        }
        
    }
    return Max;
}
signed main(){
    int n,k;
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    while (cin>>n>>k)
    {   
        for (int i = 0; i <= n; i++)
        {
            vis[i] = false;
        }
        cout<<bfs(0,n,k)<<endl;
    }
}