#include<iostream>
#include<cmath>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+100;
ll tree[N*4];
int mark[N*4];
int nums[N];
int now=0;
void build(int l,int r,int p){
    if(l==r){
        tree[p] = nums[l];
    }
    else
    {
        ll mid = (l+r)/2;
        build(l,mid,p*2);
        build(mid+1,r,p*2+1);
        tree[p] = max(tree[p*2] , tree[p*2+1]);
    }
}
void update(int l,int r,int cl,int cr,int p,int d){
    if(cr<l||cl>r){
        return;
    }else if(cr<=r&&cl<=l){
        tree[p] += (cr-cl+1)*d;
        return;
    }
    else
    {
        ll mid = (cl+cr)/2;
        update(l,r,cl,mid,p*2,d);
        update(l,r,mid+1,cr,p*2+1,d);
    }
}
ll query(int l,int r,int cl,int cr,int p){
    if(cr<l||cl>r){
        return -1e9-10;
    }else if(cl>=l&&cr<=r){
        return tree[p];
    }else{
        ll mid = (cl+cr)/2;
        return max(query(l,r,cl,mid,p*2),query(l,r,mid+1,cr,p*2+1));
    }
}
signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    while(cin>>n>>m){
        for(int i = 1;i<=n*4;i++){
            tree[i] = 0;
        }
        for(int i = 1;i<=n;i++){
            cin>>nums[i];
        }
        build(1,n,1);
        for(int i = 1;i<=m;i++){
            now = 0;
            int l,r;
            cin>>l>>r;
            cout<<query(l,r,1,n,1)<<endl;
        }
    }
}