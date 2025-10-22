//问题 R: 基础算法练习-差分矩阵（二维差分模板题）
#include<iostream>
using namespace std;
const int N=1005;
int res[N][N];
int diff[N][N];
int a[N][N];
int main(void){
    int n,m,q;
    while (~scanf("%d %d %d",&n,&m,&q))
    {   
        for (size_t i = 1; i <= n; i++)
        {   
            for (size_t j = 1; j <= m; j++)
            {   
                scanf("%d",&a[i][j]);
            }
        }
        a[0][1] = a[0][0] = a[1][0] = 0;
        for (size_t i = 1; i <= n; i++)
        {   
            for (size_t j = 1; j <= m; j++)
            {   
                diff[i][j] = a[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
            }
        }
        
        while (q--)
        {       
            int x1,y1,x2,y2;
            int c;
            scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&c);
            diff[x1][y1] += c;
            diff[x1][y2+1] -= c;
            diff[x2+1][y1] -= c;
            diff[x2+1][y2+1] += c;
        }
        for (int i = 0; i <= n; i++) res[i][0] = 0;
        for (int j = 0; j <= m; j++) res[0][j] = 0;
        for (size_t i = 1; i <= n; i++)
        {   
            for (size_t j = 1; j <= m; j++)
            {   
                res[i][j] = diff[i][j]+res[i-1][j]+res[i][j-1]-res[i-1][j-1];
                /* code */
            }
            
            /* code */
        }
        for (size_t i = 1; i <= n; i++)
        {   
            for (size_t j = 1; j <= m; j++)
            {   
                printf("%d",res[i][j]);
                if (j!=m)
                {
                    printf(" ");
                    /* code */
                }
                
                /* code */
            }
            printf("\n");
        }
    }
    return 0;
}