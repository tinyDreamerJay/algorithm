// 0 0 0  
// 100 010 001 3
// 110 101 011 4
//111 1
// 0 0 0
//10 01 2 
//11 1
// 0 0 0 0
// 1000 0100 0010 0001 4
// 1100 1010 1001 0110 0101 0011 9
//1110 1101 1011 0111 6
//1111 1
//0 -1 0 -1 0101 0100 0001 4
//0 0 -1 -1 0011 0001 0010 3
//  0 0 0 0
// 1        0
//   0 0 0 0
//  0 0 1 0
// 1        0
//   0 0 1 0
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