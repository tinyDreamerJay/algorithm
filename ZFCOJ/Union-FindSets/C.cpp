//问题 C: 基础算法练习-沈老师的岛（二维转一维模板题）
#include <iostream>
using namespace std;
const int N = 105;
int dx[]={1,1,1,0,0,-1,-1,-1};
int dy[]={1,-1,0,1,-1,0,-1,1};
char Map[N][N];
int parent[N*N];
int n,m;
int h[N*N];
int toIndex(int x,int y){
    return x*m+y;
}
void Initial(int n,int m){
    for (size_t i = 0; i < N*N; i++)
    {   
        h[i] = 1;
        parent[i] = i;
    }
}
int found(int x){
    if (parent[x]==x)
    {   
        return x;
        /* code */
    }
    return parent[x] = found(parent[x]);
}
void merge(int x,int y){
    int rootX = found(x);
    int rootY = found(y);
    if (h[rootX]<h[rootY])
    {   
        parent[rootX] = rootY;
        /* code */
    }else if(h[rootY]<h[rootX]){
        parent[rootY] = rootX;
    }else{
        h[rootX]++;
        parent[rootY] = parent[rootX];
    }
}
int main(void){
    while (cin>>n>>m)
    {   
        for (size_t i = 0; i < n; i++)
        {   
            for (size_t j = 0; j < m; j++)
            {   
                cin>>Map[i][j];
            }
        }
        Initial(n,m);
        int nextIndex;
        int nowIndex;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if (Map[i][j]=='@')
                {   
                    for (size_t k = 0; k < 8; k++)
                    {   
                        int newX = dx[k]+i;
                        int newY = dy[k]+j;
                        nextIndex = toIndex(newX,newY);
                        nowIndex = toIndex(i,j);
                        if (newX>=0&&newX<n&&newY>=0&&newY<m&&Map[newX][newY]=='@')
                        {   
                            merge(nowIndex,nextIndex);
                        }
                    }
                }
            }
        }
        int cnt =0;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {   
                if (Map[i][j]=='@')
                {   
                    int idx = toIndex(i,j);
                    if (found(idx)==idx)
                    {   
                        cnt++;
                    }
                }
            }
            
        }
        cout<<cnt<<endl;
    }
}