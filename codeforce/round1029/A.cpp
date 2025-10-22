#include<iostream>
using namespace std;
int door[100005];
int main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int n,x;
        cin>>n>>x;
        for(int i = 1;i<=n;i++){
            cin>>door[i];
        }
        if (x>=n)
        {   
            cout<<"yes"<<endl;
            /* code */
            continue;
        }
        int f;
        bool flag = true;
        for (size_t i = 1; i <= n; i++)
        {   
            if (door[i]==1)
            {   
                f = i;
                break;
            }
        }
        for (size_t i = f+x; i <= n; i++)
        {   
            if (door[i])
            {      
                flag = false;
                break;
                /* code */
            }
            
            /* code */
        }
        if (flag)
        {   
            cout<<"yes"<<endl;
            /* code */
        }else{
            cout<<"no"<<endl;
        }
        
    }
    
}