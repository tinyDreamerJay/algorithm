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
double h[N];
struct node
{   
    double s;
    double idx;
    /* data */
}res[N];
bool cmp(node a,node b){
    return a.s<b.s;
}
void solve(){
    int T;
    ci T;
    double g = 10;
    while (T--)
    {   
        double n,H;
        ci n;
        ci H;
        double vx;
        for (int i = 0; i < n; i++)
        {
            ci h[i];
            vx = sqrt(2*g*h[i]);
            double t = sqrt(2*(H-h[i])/g);
            res[i].s = vx*t;
            res[i].idx = i;
        }
        sort(res,res+(int)n,cmp);
        for (int i = 0; i < n; i++)
        {
            ct res[i].idx+1;
            if (i!=n)
            {   
                ct " ";
            }
        }
        ct '\n';
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}