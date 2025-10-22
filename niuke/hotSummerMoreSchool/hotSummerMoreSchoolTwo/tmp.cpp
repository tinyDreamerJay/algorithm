#include<iostream>
#include<cmath>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int cnt1 = 0;
        int jian = 0;
        for (int i = 0; i < s.size(); i++)
        {       
            while (s[i]=='1'&&s[i+1]=='1')
            {   
                s.erase(i,1);
                /* code */
            }
            jian++;
            cout<<jian<<" ";
            // cout<<s.size();
        }
        // cout<<s<<endl;
    }
}