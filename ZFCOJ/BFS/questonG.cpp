//问题 G: 基础算法练习-走迷宫（四）（最短时间到达 打印路径 模板题）
#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
const int N = 105;
bool vis[N][N];
char m[N][N];
int targetX,targetY;
int beginX,beginY;
int n,ma;
struct Mystruct {
    int x;
    int y;
    int cnt;
};
struct Node {
    int x, y;
} pre[N][N];

int bfs() {
    queue<Mystruct> q;
    beginX = 1;
    beginY = 1;
    q.push({beginX, beginY, 0});
    vis[beginX][beginY] = true;
    pre[beginX][beginY] = {-1,-1};
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    while (!q.empty()) {
        Mystruct now = q.front();
        q.pop();
        
        if (now.x == targetX && now.y == targetY) {
            return now.cnt;
        }
        
        for (int i = 0; i < 4; i++) {
            int newX = now.x + dx[i];
            int newY = now.y + dy[i];
            
            if (newX >= 1 && newX <= n && newY >= 1 && newY <= ma && 
                !vis[newX][newY] && m[newX][newY] != '#') {
                vis[newX][newY] = true;
                q.push({newX, newY, now.cnt + 1});
                pre[newX][newY] = {now.x, now.y}; 
            }
        }
    }
    return 0;
}
void printPath(int x,int y,int res){
    if (pre[x][y].x == -1 && pre[x][y].y == -1)
    {   
        return;
    }
    printPath(pre[x][y].x,pre[x][y].y,res-1);
    cout<<"path "<<res<<": ("<<pre[x][y].x-1<<", "<<pre[x][y].y-1<<") ---> ("<<x-1<<", "<<y-1<<")"<<endl;
}
int main(void){
    while (cin>>n>>ma)
    {   
       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                vis[i][j] = false;
                pre[i][j] = {0, 0}; 
            }
        }

        for (size_t i = 1; i <= n; i++)
        {   
            for (size_t j = 1; j <= ma; j++)
            {   
                cin>>m[i][j];
            }
        }
        beginX = beginY = 1;
        targetX = n;
        targetY = ma;
        if (m[targetX][targetY]=='#'||m[beginX][beginY]=='#')
        {   
            cout<<"0"<<"\n";
        }else{
            int res = bfs();
            cout<<res<<endl;
            if(res!=0)
            printPath(targetX,targetY,res);    
        }    
    }
}