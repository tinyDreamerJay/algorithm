#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int i,f;
    i = n/36;
    f = n%36;
    vector<int> check;
    int t = 2;
    for(int i = 0;i<18;i++){
        check.push_back(t);
        t+=3;
    }
    bool tmp = false;
    for(auto& a:check){
        if(a==f){
            tmp = true;
            if(f==35){
                i++;
                f=0;
            }else{
                f++;
                f /= 3;
            }
        }
    }
    if(!tmp) f /= 3;
    cout<<i<<" "<<f<<endl;
}