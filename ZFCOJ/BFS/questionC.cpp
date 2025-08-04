//问题 C: 基础算法练习-翻牌（BFS保存路径 模板题）
#include<iostream>
#include<string>
#include<queue>
#include<map>
using namespace std;
map<string,bool> vis;
map<string,string> parent;
bool found;
void bfs(string beg,string end){
    queue<string> q;
    q.push(beg);
    vis[beg] = true;
    parent[beg] = "";
    while (!q.empty())
    {   
        string u = q.front();
        q.pop();
        if (u==end)
        {   
            found = true;
            break;
            /* code */
        }
        for (size_t i = 0; i < u.size(); i++)
        {   
            string s = u;
            for (size_t j = 0; j < u.size(); j++)
            {      
                if (j!=i)
                {   
                    s[j] = (s[j]=='1')?'0':'1'; 
                    /* code */
                }
            }
            if (!vis[s])
            {   
                vis[s] = true;
                q.push(s);
                parent[s] = u;
            }
        }
    }
}
void printPath(string s,string beg,int step){
    if (!found)
    {   
        cout<<"-1"<<endl;
        return;
    }
    if (parent[s]=="")
    {   
        cout<<step<<endl;
        return;
    }
    printPath(parent[s],beg,++step);
    cout<<s<<endl;
}
int main(void){
    int n;
    while (cin>>n)
    {   
        vis.clear();
        parent.clear();
        found = false;
        string beg,end;
        cin>>beg>>end;
        bfs(beg,end);
        printPath(end,beg,0);
    }
    return 0;
}