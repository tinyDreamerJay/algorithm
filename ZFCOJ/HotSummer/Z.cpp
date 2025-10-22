#include<stdio.h>
#include<string>
#include<iostream>
#include<queue>
using namespace std;
#define int long long
#define rep0(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf64 4000000000000000001LL

char mp[1001][1001];
int dist[1001][1001][2];
struct node
{   
    int x;
    int y;
    char state;  
    int step;
};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m;

int bfs(int beginX,int beginY){
    rep1(i,n) rep1(j,m) rep0(k,2) dist[i][j][k] = Inf64; 
    
    char start_state = mp[beginX][beginY];
    node Be = {beginX, beginY, start_state, 0};
    dist[beginX][beginY][start_state - '0'] = 0;
    queue<node> q;
    q.push(Be);
    int cnt = 0;
    bool f = false;
    while (!q.empty())
    {   
        auto now = q.front();
        q.pop();
        if(now.x == n && now.y == m){
            if(!f){
                f= true;
                cnt = now.step;
            }else{
                cnt = min(cnt,now.step);
            }
            continue;
        }
        if(now.step > dist[now.x][now.y][now.state - '0']){
            continue;
        }
        
        rep0(i,4){
            int nx = now.x + dx[i];
            int ny = now.y + dy[i];
            
            if(nx < 1 || nx > n || ny < 1 || ny > m){
                continue;
            }
            
            char original = mp[nx][ny];
            
            if(now.state != original){
                int new_step = now.step + 1;
                int state_idx = original - '0';
                if(new_step < dist[nx][ny][state_idx]){
                    dist[nx][ny][state_idx] = new_step;
                    q.push({nx, ny, original, new_step});
                }
            }
            
            char modified = (original == '0' ? '1' : '0');
            if(now.state != modified){
                int new_step = now.step + 2;  
                int state_idx = modified - '0';
                if(new_step < dist[nx][ny][state_idx]){
                    dist[nx][ny][state_idx] = new_step;
                    q.push({nx, ny, modified, new_step});
                }
            }
        }
    }
    return cnt;
}

void solve(){
    while (cin>>n>>m)
    {   
        rep1(i,n){
            string s;
            ci s;
            rep1(j,m){
                mp[i][j] = s[j-1];
            }
        }
        ct bfs(1,1) en;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    r0;
}
