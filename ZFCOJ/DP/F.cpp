#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(void){
    string s;
    while (cin>>s)
    {
        int last1 = 0;
        int last0 = 0;
        int Max = 0;
        for(char ch:s){
            if (ch=='0')
            {   
                last0 = last1+1;
                last1 = 0;
                /* code */
            }else if(ch=='1'){
                last1 = last0+1;
                last0 = 0;
            }else{
                int temp0 = last1+1;
                int temp1 = last0+1;
                last0 = temp0;
                last1 = temp1;
            }
            Max = max(Max,max(last0,last1));
        }
        cout<<Max<<endl;
    }
}