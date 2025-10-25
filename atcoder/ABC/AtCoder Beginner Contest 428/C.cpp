#include<iostream>
#include<vector>
using namespace std;
const int N = 1e6;
int A[N];
int B[N];
signed main(void){
    vector<int> bracket;
    int top;
    int a = 0;
    int b = 0;
    int q;
    cin>>q;
    while (q--)
    {
        char ch;
        int op;
        cin>>op;
        if(op==1){
            cin>>ch;
            top++;
            if(ch==')'){
                if (a>0)
                {   
                    a--;
                }
                else
                {
                    b++;
                }
                B[top] = b;
                A[top] = a;
            }
            else
            {
                a++;
            }
            B[top] = b;
            A[top] = a;
        }else
        {
            //delete
            top--;
            b = B[top];
            a = A[top];
        }
        if(a==b&&a==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}