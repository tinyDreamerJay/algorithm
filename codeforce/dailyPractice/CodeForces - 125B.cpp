#include<iostream>
using namespace std;
int main(void){
    string s;
    cin>>s;
    int idx = 0;
    int BlankSpace = 0;
    while (idx<s.size())
    {   
        if(s[idx]=='<'&&s[idx+2]=='>'){
            for(int i = 0;i<BlankSpace;i++){
                cout<<" ";
            }
            BlankSpace += 2;
            for(int i = idx;i<=idx+2;i++){
                cout<<s[i];
            }
            idx += 3;
        }else{
            BlankSpace-=2;
            for(int i = 0;i<BlankSpace;i++){
                cout<<" ";
            }
            for(int i = idx;i<=idx+3;i++){
                cout<<s[i];
            }
            idx += 4;
        }
        cout<<endl;
    }
}