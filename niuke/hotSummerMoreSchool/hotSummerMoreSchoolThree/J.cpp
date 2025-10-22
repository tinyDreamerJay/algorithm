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
const int N = 1e6+100;
int Two_64;
int Two_32;
int Two_16;
int Two_8;
int Two_4;
int Two_2;
void slove(){
    int T;
    ci T;
    int Two_64 = 1LL << 63; 
    int Two_32 = 1LL << 31;
    int Two_16 = 1 << 15; 
    int Two_8 = 1 << 7;    
    int Two_4 = 1 << 3;  
    int Two_2 = 1 << 1;    
    
    // cout << Two_64 << " " << Two_32 << " " << Two_16 << " " 
        //  << Two_8 << " " << Two_4 << " " << Two_2 << "\n";
    while(T--)
    {
        int y,e;
        ci y;
        ci e;
        set<pair<int, int>> visited;
        int cnt= 0;
        bool f = true;
        while (1)
        {      
            if (y == 0 || e == 0) break;
            if (y == e) {
                cnt++;
                break;
            }
            if (visited.count({y, e})) {
                f = false;
                break;
            }
            visited.insert({y, e});
            bool processed = false;
            if (y < e) {
                if (y * Two_32 < e) {
                    e -= y;
                    y *= Two_32;
                    cnt += 31;
                    processed = true;
                } else if (y * Two_16 < e) {
                    e -= y;
                    y *= Two_16;
                    cnt += 15;
                    processed = true;
                } else if (y * Two_8 < e) {
                    e -= y;
                    y *= Two_8;
                    cnt += 7;
                    processed = true;
                } else if (y * Two_4 < e) {
                    e -= y;
                    y *= Two_4;
                    cnt += 3;
                    processed = true;
                } else if (y * Two_2 < e) {
                    e -= y;
                    y *= Two_2;
                    cnt += 1;
                    processed = true;
                }
            } 
            else if (e < y) {
                if (e * Two_32 < y) {
                    y -= e;
                    e *= Two_32;
                    cnt += 31;
                    processed = true;
                } else if (e * Two_16 < y) {
                    y -= e;
                    e *= Two_16;
                    cnt += 15;
                    processed = true;
                } else if (e * Two_8 < y) {
                    y -= e;
                    e *= Two_8;
                    cnt += 7;
                    processed = true;
                } else if (e * Two_4 < y) {
                    y -= e;
                    e *= Two_4;
                    cnt += 3;
                    processed = true;
                } else if (e * Two_2 < y) {
                    y -= e;
                    e *= Two_2;
                    cnt += 1;
                    processed = true;
                }
            }
            if (!processed) {
                if (y < e) {
                    e -= y;
                    y *= 2;
                } else {
                    y -= e;
                    e *= 2;
                }
                cnt++;
            }
        }
        if (f) {
            ct cnt en;
        } else {
            ct -1 en;
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
// 2
// 7
// 6 7 5 4 3 1 2
// 3 7 4 6 2 1 5