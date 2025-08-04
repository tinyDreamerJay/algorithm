#include<iostream>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int n,k;
        cin>>n>>k;
        char ch;
        int cnt1 = 0;
        int cnt0 = 0;
        for (size_t i = 0; i < n; i++)
        {   
            cin>>ch;
            if (ch=='0')
            {   
                cnt0++;
                /* code */
            }else{
                cnt1++;
            }
            
            /* code */
        }
        int t1 = n/2-k;
        int t0 = n/2-k;
        if (cnt1<t1||cnt0<t0)
        {   
            cout<<"NO"<<endl;
            continue;
            /* code */
        }
        t1 = cnt1 - t1;
        t0 = cnt0 - t0;
        if (t1%2==0&&t0%2==0)
        {
            cout<<"YES"<<endl;
            /* code */
        }else{
            cout<<"NO"<<endl;
        }
        
        /* code */
    }
    
}