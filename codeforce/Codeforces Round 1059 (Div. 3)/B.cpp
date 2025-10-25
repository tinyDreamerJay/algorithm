#include<iostream>
#include<string>
#include<vector>
#define int long long
using namespace std;
signed main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        vector<int> vis;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='0'){
                cnt++;
            vis.push_back(i+1);
            }
        }
        cout<<cnt<<endl;
        for(auto v:vis){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    
}