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
struct node
{   
    int p;
    int a;
    int b;
    /* data */
}thing[N];

void slove(){
    int n;
    ci n;
    for (int i = 0; i < n; i++)
    {   
        int a,b,c;
        ci a;
        ci b;
        ci c;
        thing[i].p = a;
        thing[i].a = b;
        thing[i].b = c;
    }
    int q;
    ci q;
    for (int i = 0; i < q; i++)
    {
        int x;
        ci x;
        for (int i = 0; i < n; i++)
        {
            if(thing[i].p>=x){
                x+= thing[i].a;
            }else{
                if(thing[i].b>x){
                    x = 0;
                }
                else
                {
                    x -= thing[i].b;
                }
            }
        }
        ct x en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	slove();
    r0;
}