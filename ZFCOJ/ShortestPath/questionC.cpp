#include<iostream>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
const int N = 200005;
const int M =205;
const int INF = 0x3f3f3f3f; 
int G[M][M];
int dist[M];
bool vis[M];
int parent[M];
int n,m;
void dijkstra(int beg){
    dist[beg] = 0;
    for (size_t i = 0; i < n; i++)
    {   
        int u = -1;
        int minDis = INF;
        for (size_t j = 0; j < n; j++)
        {   
            if (!vis[j]&&dist[j]<minDis)
            {   
                u = j;
                minDis = dist[j];
            }
        }
        if (u==-1)
        {   
            break;
        }
        vis[u] = true;
        for (size_t j = 0; j < n; j++)
        {   
            if (!vis[j]&&G[u][j]!=INF&&dist[j]>G[u][j]+dist[u])
            {   
                dist[j] = G[u][j]+dist[u];
                parent[j] = u;
            }
        }
    }
    return;
}
void prinfPath(int u){
    if (parent[u]==-1)
    {   
        cout<<u;
        return;
    }
    prinfPath(parent[u]);
    cout<<"->";
    cout<<u;
}
int main(void){
    while (cin>>n>>m)
    {   
        for (size_t i = 0; i < n; i++)
        {   
            parent[i] = -1;
            dist[i] = INF;
            vis[i] = false;
        }
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {   
                if (i==j)
                {   
                    G[i][j] = 0;
                }else{
                    G[i][j] = INF;
                }
            }
        }
        for (size_t i = 0; i < m; i++)
        {   
            int u,v,len;
            cin>>u>>v>>len;
            G[u][v] = len;
            G[v][u] = len;
        }
        int beg,end;
        cin>>beg>>end;
        dijkstra(beg);
        if (dist[end]==INF)
        {   
            cout<<-1<<"\n";
        }else{
            cout<<dist[end]<<"\n";
            prinfPath(end);
            cout<<"\n";
        }
    }
    return 0;
}