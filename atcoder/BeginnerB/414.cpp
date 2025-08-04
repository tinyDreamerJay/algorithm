#include<iostream>
#include<vector>
#include<string>
#define ull unsigned long long
using namespace std;
const int N = 1000;
char ch[N];
ull num[N];
void p(){
    cout<<"Too Long"<<endl;
    return ; 
}
int main(void){
    int n;
    cin>>n;
    ull cnt = 0;
    string s;
    for (int i = 0; i < n; i++)
    {   
        cin>>ch[i]>>num[i];
    }
    for (int i = 0; i < n; i++)
    {   
        cnt += num[i];
        if (cnt>100)
        {   
            p();
            return 0;
        }
        
        for (int j = 0; j < num[i]; j++)
        {
            s = s+ch[i];
        }
    }
    cout<<s<<endl;
}