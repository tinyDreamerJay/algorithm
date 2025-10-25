#include<iostream>
#include<string>
#include<vector>
#define int long long
using namespace std;
signed main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;
        vector<int> nums;
        int Max = -1;
        for(int i = 0;i<n;i++){
            int tmp;
            cin>>tmp;
            if(tmp>Max){
                Max = tmp;
            }
            nums.push_back(tmp);
        }
        cout<<Max<<endl;
    }
    
}