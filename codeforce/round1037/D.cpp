#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e6;
int a[N];
bool vis[N];
struct D
{   
    int coin;
    int begg;
    int endd;
}casinos[N];

bool cmp(D a,D b){
    return a.coin<b.coin;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while (T--)
    {
        int n,c;
        cin>>n>>c;
        for (int i = 0; i < n; i++)
        {
            cin>>casinos[i].begg>>casinos[i].endd>>casinos[i].coin;
            vis[i] = false;
        }
        sort(casinos,casinos+n,cmp);
        bool inc = true;
        int now = 0;
        while (true)
        {   
            if (inc== false)
            {   
                break;
            }
            for (int i = now; i < n; i++)
            {
                if (casinos[i].coin>=c&&!vis[i]&&c>=casinos[i].begg&&c<=casinos[i].endd)
                {   
                    now = i;
                    vis[i] = true;
                    c = casinos[i].coin;
                    inc = true;
                    break;
                }
                else
                {
                    inc = false;
                }
            }
        }
        cout<<c<<endl;
    }
}