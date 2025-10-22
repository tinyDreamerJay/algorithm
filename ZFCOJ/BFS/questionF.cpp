//问题 F: 基础算法练习-馬的步数（图上BFS模板题）
#include<iostream>
#include<queue>
#include<string>
using namespace std;
bool vis[10][10];
int dx[]={1,1,2,2,-1,-1,-2,-2};
int dy[]={2,-2,1,-1,2,-2,1,-1};
struct Mystruct
{   
    int x;
    int y;
    int cnt;
};
//1 b 3 c
int bfs(int startRow,char startColumn,int targetRow,char tmpColumn){
    queue<Mystruct>q;
    q.push({startRow,startColumn-'a',0});
    int targetColumn = tmpColumn-'a';
    vis[startRow][startColumn]=true;
    while (!q.empty())
    {   
        Mystruct now = q.front();
        q.pop();
        if (now.x == targetRow&&now.y==targetColumn)
        {   
            return now.cnt; 
            /* code */
        }
        for (size_t i = 0; i <8; i++)
        {   
            int newX = now.x+dx[i];
            int newY = now.y+dy[i];
            if (newX>8||newX<1||newY>7||newY<0||vis[newX][newY])
            {   
                continue;
            }
            vis[newX][newY]=true;
            q.push({newX,newY,now.cnt+1});            
        }
    }
    return -1;
}
int main(void){
    char startColumn,targetColumn;
    int startRow,targetRow;
    while (cin>>startColumn>>startRow)
    {   
        for (size_t i = 0; i < 10; i++)
        {   
            for (size_t j = 0; j < 10; j++)
            {   
                vis[i][j] = false;
            }
        }
        cin>>targetColumn>>targetRow;
        int res = bfs(startRow,startColumn,targetRow,targetColumn);
        cout<<"To get from "<<startColumn<<startRow<<" to "<<targetColumn<<targetRow<<" takes "<<res<<" knight moves."<<endl;
        /* code */
    }
    
}