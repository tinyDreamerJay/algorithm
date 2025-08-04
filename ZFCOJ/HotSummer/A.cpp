#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
    double L,x,y,z;
    while (cin>>L>>x>>y>>z)
    {
        double time = L / (x+y);
        double sum = time*z;
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    
}