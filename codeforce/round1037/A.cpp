#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(void){
    int T;
    cin>>T;
    while (T--)
    {
        string s;
        cin>>s;
        int Max = 11;
        for (int i = 0; i < s.size(); i++)
        {
            Max = min(Max,s[i]-'0');
        }
        cout<<Max<<endl;
    }
}