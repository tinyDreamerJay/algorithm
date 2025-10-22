#include<iostream>
using namespace std;
const int N =1e4;
int tree[N*4];
int mark[N*4];

void build(int l,int r,int p){
    if(l==r){
        tree[l] = p;
        return;
    }
    int mid = (l+r)/2;
    build(l,mid,p*2);
    build(mid+1,r,p*2+1);
    tree[p] = tree[p*2]+tree[p*2+1];
}
int main(void){
    
}