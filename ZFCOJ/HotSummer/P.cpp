#include<iostream>
#include<vector>
#define int long long
using namespace std;
const int N = 1e5+10;
vector<int> letter[27];
bool vis[27];
signed main(){
    int T;
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    while (cin>>T)
    {   
        while (T--)
        {
            int n;
        cin>>n;
        string s;
        cin>>s;
        s = " "+s;
        for (int i = 1; i <= 27; i++)
        {
            vis[i] = false;
            letter[i].clear();
        }
        for (int i = 1; i <= n; i++)
        {
            letter[s[i]-'a'+1].push_back(i);
        }
        int sta = 1;
        int en = letter[s[sta]-'a'+1].back();
        int cnt = 0;
        bool first = true;
        while(sta<=n)
        {   
            // cout<<cnt<<" ";
            while (sta!=en||letter[s[sta]-'a'+1].back()!=en)
            {
                int tmpEnd = letter[s[sta]-'a'+1].back(); 
                if (tmpEnd>en)
                {   
                    en = tmpEnd;
                }
                sta++;
            }
            sta++;
            en++;
            cnt++;   
        }
        cout<<cnt<<endl;   
        }
    }
}