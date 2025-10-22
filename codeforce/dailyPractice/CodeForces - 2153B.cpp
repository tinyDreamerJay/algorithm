#include<iostream>
using namespace std;
signed main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if(a>b) swap(a,b);
        // cout<<a<<b<<c;
        string sa;
        string sb;
        string sc;
        while (a)
        {   
            sa = char(a%2+'0')+sa;
            a/=2;
        }
        while (b)
        {   
            sb = char(b%2+'0') + sb;
            b/=2;
        }
        while (c)
        {   
            sc = char(c%2+'0') +sc;
            c/=2;
        }
        // cout<<sa<<endl;
        // cout<<sb<<endl;
        // cout<<sc<<endl;
        while(sa.size()!=sb.size()||sa.size()!=sc.size()||sb.size()!=sc.size()){
            if(sa.size()<sb.size()){
                sa = "0"+sa;
            }
            if(sb.size()<sc.size()){
                sb = "0"+sb;
            }
        }
        //         cout<<sa<<endl;
        // cout<<sb<<endl;
        // cout<<sc<<endl;
        bool f = true;
        for(int i = 0;i<sa.size();i++){
            int cnt = 0;
            if(sa[i]=='1'){
                cnt++;
            }
            if(sb[i]=='1'){
                cnt++;
            }
            if(sc[i]=='1'){
                cnt++;
            }
            if(cnt==2)
            f = false;
        }
        if(f)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        /* code */
    }
    
}