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
        long long n;
        cin>>n;
        if(n==0){
            cout<<"yes"<<endl;
            continue;
        }
        string s;
        while(n){
            s += char(n%2 + '0');
            n/=2;
        }
        auto check =  [&](){
            int l=0;
            int r=s.size()-1;
            while(l<=r){
                if(s[l]!=s[r])
                return false;
                l--,r++;
            }
            return true;
        };
        int cnt = 35;
        while (!check())
        {   
            s += '0';
            if(--cnt == 0)
            break;
            /* code */
        }
        if(cnt==0){
            cout<<"no"<<endl;
            break;
        }
        if(s.size()%2==0){
            cout<<"yes"<<endl;
        }else{
            if(s[s.size()/2]=='1'){
                cout<<"no"<<endl;
            }else{
                cout<<"yes"<<endl;
            }
        }
        /* code */
    }
    
}