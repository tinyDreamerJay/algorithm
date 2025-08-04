#include<iostream>
#include<cmath>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while (n--)
    {
        int num1,num2;
        cin>>num1>>num2;
        // int l = 1;
        // int r = max(num1,num2)-1;
        // while (l<=r)
        // {
        //     int mid = (l+r)/2;
        //     if (num1%mid+mid%num1!=num2%mid+mid%num2)
        //     {   
        //         num1 = 
        //         /* code */
        //     }
            
        // }
        cout<<num1%num2<<endl;
    }
}