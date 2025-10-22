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
const int N = 2e5+100;
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int n;
        ci n;
        string s;
        ci s;
        int q=0;
int qc=0;
int qca=0;
int qcay=0;
int qcj=0;
int qcjj=0;
        rep0(i,n){
            if(s[i]=='q'){
                q++;
            }
            if(s[i]=='c'){
                qc += q;
            }
            if(s[i]=='j'){
                qcjj+=qcj;
                qcj += qc;
            }
            if(s[i]=='a'){
                qca += qc;
            }
            if(s[i]=='y'){
                qcay += qca;
            }
        }
        // cout<<qcay<<" "<<qcjj<<endl;
        if(qcay>qcjj){
            cout<<"qcay"<<endl;
        }else
        {
            cout<<"qcjj"<<endl;
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}