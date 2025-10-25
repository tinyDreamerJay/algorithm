#include<iostream>
using namespace std;
const int N = 100005;
char ch1[N];
char ch2[N];
int main(void){
    int x;
    cin>>x;
    bool flag = false;
    for (size_t i = 0; i < x; i++)
    {   
        cin>>ch1[i];
        /* code */
    }
    for (size_t i = 0; i < x; i++)
    {   
        cin>>ch2[i];
        /* code */
    }
    for (size_t i = 0; i < x; i++)
    {   
        if (ch1[i]==ch2[i]&&ch1[i]=='o')
        {   
            flag =true;
            cout<<"Yes";
            break;
            /* code */
        }
        
        /* code */
    }
    
    if (!flag)
    {   
        cout<<"No";
        /* code */
    }
    
}