#include<iostream>
#include<map>
#include<cmath>
#define endl "\n"
#define int long long
using namespace std;
const int N = 2e5+10;
int diff[N];
int a[N];
signed main(){
    int N,C;
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    while (cin>>N>>C)
    {   
        map<int,int>mp;
        for (int i = 0; i < N; i++)
        {
            int beg,end,c;
            cin>>beg>>end>>c;
            mp[beg] += c;
            mp[end+1] -= c;
        }
        bool flag = true;
        int sta = 0;
        int en = 0;
        int w = 0;
        int ans = 0;
        for(auto v:mp){
            if (flag)
            {   
                sta = v.first;
                w += v.second;
                flag = false;
            }
            else
            {
                int day = v.first - sta;
                if(C<w){
                    ans += day*C;
                }else{
                    ans += day*w;
                }
                sta = v.first;
                w += v.second;
            }
        }
        cout<<ans<<endl;
    }
}

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
 
// const int MAX = 2e5 + 7;
 
// struct NUM{
//     int id;
//     char pos;
//     int size;
// };
 
// bool cmp(NUM x, NUM y)
// {
//     if (x.id != y.id)
//     {
//         return x.id < y.id;
//     }
//     return x.pos < y.pos;
// }
 
// signed main()
// {
//     int N, C;
//     while ( cin >> N >> C )
//     {
//         vector<NUM> vt;
//         int a, b, c;
//         for ( int i = 1; i <= N; i ++ )
//         {
//             cin >> a >> b >> c;
//             vt.push_back({a, 'a', c});
//             vt.push_back({b, 'b', c});
//         }
//         sort(vt.begin(), vt.end(), cmp);
//         int sum = 0;
//         int s = 0;
//         int ans = 0;
//         for ( int i = 0; i < vt.size(); i ++ )
//         {
//             if (vt[i].pos == 'a') {
//                 ans += (vt[i].id - s) * min(sum, C);
//                 sum += vt[i].size;
//                 s = vt[i].id;
//             } else {
//                 ans += (vt[i].id - s + 1) * min(sum, C);
//                 sum -= vt[i].size;
//                 s = vt[i].id + 1;
//             }
//         }
//         cout << ans << endl;
//     }
// }

// #include "bits/stdc++.h"
// #define endl "\n"
// #define ll long long
// #define pii pair<int,int>
// #define pll pair<ll,ll>
// #define xx first
// #define yy second
// #define f1(i,n) for(int i = 1;i <= n;i++)
// #define f(i,n) for(int i = 0;i < n;i++)
// using namespace std;
// const int N = 2e5 + 5;
// const int INF = 0x3f3f3f3f;
// const int mod = 1e9 + 7;
//struct node {
//    int to, w;
//    bool operator>(const node& other) const {
//        return w > other.w;
//    }
//};
//do{
//}while(next_permutation(p.begin(),p.end()));  全排列
//cout << fixed << setprecision(4) << num << endl;
// struct Node {
//     ll a,b,c;
// }node[N];
 
// bool cmp(Node x,Node y){
//     return x.a < y.a;
// }
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     ll n,C;
//     while(cin >> n >> C){
//         for(int i = 0;i < n;i++){
//             cin >> node[i].a >> node[i].b >> node[i].c;  
//         }
//         sort(node,node + n,cmp);
         
//         map<ll,ll> mp;
//         for(int i = 0;i < n;i++){
//             int s = node[i].a;
//             int e = node[i].b;
//             int c = node[i].c;
//             mp[s] += c;
//             mp[e + 1] -= c;
//         }
//         ll t = 0;
//         ll w = 0;
//         ll ans = 0;
//         bool falg = true;
//         for(auto v : mp) {
//             if(falg){
//                 t = v.xx;
//                 w = v.yy;
//                 falg = false;
//             }else{
//                 if(w < C) {
//                     ans += (v.xx - t) * w;
//                     w += v.yy;
//                     t = v.xx;
//                 }else{
//                     ans += (v.xx - t) * C;
//                     w += v.yy;
//                     t = v.xx;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }