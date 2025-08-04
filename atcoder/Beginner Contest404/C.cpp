#include<iostream>
using namespace std;
const int N = 2e5+10;
int con[N];
int fa[N];
int h[N];
void Initial(int n){
    for (size_t i = 1; i <= n; i++)
    {   
        fa[i] = i;
        h[i] = 1;
    }
}
int find(int x){
    if (fa[x]==x)
    {   
        return x;
        /* code */
    }
    return fa[x] = find(fa[x]);
}
void merge(int a,int b){
    int rootA = find(a);
    int rootB = find(b);
    if (h[rootA]>h[rootB])
    {   
        fa[rootB] = rootA; 
        /* code */
    }else if(h[rootA]<h[rootB]){
        fa[rootA] = rootB;
    }else{
        fa[rootA] = rootB;
        h[rootB]++;
    }
}
int main(void){
    int n,m;
    cin>>n>>m;
    if (n!=m)
    {   
        cout<<"No";
        return 0;
        /* code */
    }
    Initial(n);
    for (size_t i = 0; i < n; i++)
    {   
        int a,b;
        cin>>a>>b;
        con[a]++;
        con[b]++;
        if (fa[a]!=fa[b])
        {   
            merge(a,b);
        }
    }
    for(int i=1;i<=n;i++){
        if (con[i]!=2||find(1)!=find(i))
        {   
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}