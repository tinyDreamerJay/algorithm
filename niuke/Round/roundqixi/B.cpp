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
#define rep0(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e5+100;
void solve(){
    string a;
    string b;
    ci a;
    ci b;
    char ch;
    ci ch;
    int lenA = a.size();
    int lenB = b.size();
    int A = 0;
    int B = 0;
    int zhi = 0;
    for (int i = lenA-1; i >= 0; i--)
    {   
        int tmp = 1;
        for(int j = 0;j<zhi;j++){
            tmp *= 2;   
        }
        A += (a[i]-'0')*tmp;
        zhi++;
    }
    zhi = 0;
    for (int i = lenB-1; i >= 0; i--)
    {
        int tmp = 1;
        for(int j = 0;j<zhi;j++){
            tmp *= 2;   
        }
        B += (b[i]-'0')*tmp;
        zhi++;
    }
    if(ch=='+'){
    cout<<A+B<<endl;

    }else if(ch=='-'){
    cout<<A-B<<endl;
        
    }else if(ch=='*'){
    cout<<A*B<<endl;
        
    }else{
    cout<<A/B<<endl;
        
    }
}
signed main(){
	solve();
    r0;
}