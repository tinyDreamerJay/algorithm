#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> nums;
int main(void){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    sort(nums.begin(),nums.end());
    auto it = unique(nums.begin(),nums.end());
    cout<<it-nums.begin()<<endl;
    for(auto i= nums.begin();i<it;i++){
        cout<<*i<<" ";
    }
    return 0;
}