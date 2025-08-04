#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<unordered_map>
using namespace std;
#define int long long
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 2e5+100;

int nums[N];
int tree[N * 10];
int mark[N * 10];
inline void push_down(int p,int len){
    if (mark[p] != 0 && len > 1) {
        int left = p * 2;
        int right = p * 2 + 1;
        mark[left] += mark[p];
        mark[right] += mark[p];
        tree[left] += mark[p] * (len - len / 2);
        tree[right] += mark[p] * (len / 2);
        mark[p] = 0; 
    }
}
void build(int l,int r,int p){
    if(l==r) tree[p] = 0;
    else
    {
        int mid = (l+r)/2;
        build(l,mid,p*2);
        build(mid+1,r,p*2+1);
        tree[p] = tree[p*2]+tree[p*2+1];
    }
}

void update(int l,int r,int k,int p,int cl,int cr){
    if (cr<l||r<cl)
    {   
        return;
    }else if(cl>=l&&cr<=r){
        tree[p] += (cr-cl+1)*k;
        if(cl<cr)
        mark[p] += k;
    }else
    {
        int mid = (cl+cr)/2;
        push_down(p,cr-cl+1);
        update(l,r,k,p*2,cl,mid);
        update(l,r,k,p*2+1,mid+1,cr);
        tree[p] = tree[p*2]+tree[p*2+1];
    }
}
int query(int p,int l,int r,int cl,int cr){
    if(cl>=l&&cr<=r){
        return tree[p];
    }else if(cr<l||cl>r){
        return 0;
    }else{
        int mid = (cl+cr)/2;
        push_down(p,cr-cl+1);
        return query(p*2,l,r,cl,mid)+query(p*2+1,l,r,mid+1,cr);
    }
}
void slove(){
    int n,q;
    ci n;
    ci q;
    if (n > 0) { 
    build(1, n, 1);
    }
    for (int i = 0; i < q; i++)
    {
        char op;
        int a,b;
        ci op;
        ci a;
        ci b;
        if(op=='x'){
            update(a,a,b,1,1,n);
        }else if(op=='y')
        {   
            ct query(1,a,b,1,n) en;
        }   
        
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}