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
const int N = 1e3+100;
int px[N];
int py[N];
void solve(){
    int T;
    ci T;
    while (T--)
    {   
        int x,y;
        int n;
        cin>>x>>y>>n;
        string s;
        ci s;
        rep0(i,s.size()+1){
            px[i] = 0;
            py[i] = 0;
        }
        rep0(i,s.size()){
            px[i+1] = px[i];
            py[i+1] = py[i];
            if (s[i]=='U') py[i+1]++;
            else if (s[i]=='D') py[i+1]--;
            else if (s[i]=='R') px[i+1]++;
            else if (s[i]=='L') px[i+1]--;
        }
        bool f = false;
        int len = s.size();
        int dx = px[len];
        int dy = py[len];
        
        for(int i=0; i<=s.size(); i++){
            int nowX = px[i];
            int nowY = py[i];
            int rx = x - nowX;
            int ry = y - nowY;
            
            if(dx==0 && dy==0){
                if(rx==0 && ry==0){
                    f = true;
                    break;
                }
            }else if(dx==0){
                if(rx != 0) continue;
                if(dy == 0) continue;
                if(ry % dy != 0) continue;
                int k = ry / dy;
                if(k >= 0 && k < n){
                    f = true;
                    break;
                } 
            }else if(dy==0){
                if(ry != 0) continue;
                if(dx == 0) continue;
                if(rx % dx != 0) continue;
                int k = rx / dx;
                if(k >= 0 && k < n){
                    f = true;
                    break;
                } 
            }else{
                if(rx % dx != 0) continue;
                if(ry % dy != 0) continue;
                int kx = rx / dx;
                int ky = ry / dy;
                if(kx == ky && kx >= 0 && kx < n){
                    f = true;
                    break;
                } 
            }
        }
        
        if(f){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
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