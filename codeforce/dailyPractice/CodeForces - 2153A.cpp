#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> nums(105,0);
        for(int i = 0;i<n;i++){
            int tmp;
            cin>>tmp;
            nums[tmp] = 1;
        }
        int cnt=0;
        for(int i = 1;i<=n;i++){
            if(nums[i]==1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}