#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1000005;
int p[N];
int h[N];
int cla[N];
int roots[N];
void Initial(int n){
    for(int i=1;i<=n;i++){
        p[i] = i;
        h[i] = 1;
        cla[i] = 0; 
    }
}
int Find(int x){
    if (p[x]==x)
    {   
        return x;
    }
    return p[x] = Find(p[x]);
}
void merge(int a,int b){
    int rootA = Find(a);
    int rootB = Find(b);
    if (h[rootA]<h[rootB])
    {   
        p[rootA] = rootB;
    }else if(h[rootA]>h[rootB]){
        p[rootB] = rootA;
    }else{
        h[rootB]++;
        p[rootA] = rootB;
    }
}
int main(void){
    int n,m;
    while (cin>>n>>m)
    {   
        Initial(n);
        for (size_t i = 0; i < m; i++)
        {   
            int a,b;
            cin>>a>>b;
            merge(a,b);
        }
        for(int i=1;i<=n;i++){
            roots[i] = Find(i);
        }
        sort(roots+1, roots+n+1); 
        int tmp = roots[1];
        int cnt = 1;
        for(int i=2;i<=n;i++){
            if(tmp != roots[i]){
                cnt++;
                tmp = roots[i];
            }
        }
        cout<<cnt<<endl;
        cnt = 1;
        tmp = roots[1];
        int idx = 0;
        for (size_t i = 2; i <= n; i++)
        {   
            if (tmp!=roots[i])
            {   
                cla[idx++] = cnt;
                cnt = 1;
                tmp = roots[i];
            }else{
            cnt++;
            }
        }
        if(cnt>0) cla[idx++] = cnt; 
        sort(cla, cla+idx); 
        for(int i = 0;i<idx;i++){
            cout<<cla[i]<<" ";
        }
    }
}