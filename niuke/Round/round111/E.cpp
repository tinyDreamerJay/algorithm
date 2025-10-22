#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int n,k;
    cin>>n>>k;
    k -= n*2+(n-1);
    if(k<0){
        cout<<"-1"<<endl;
        return 0;
    }
    vector<bool> vis(n+1,false);
    vector<int> nums;
    vis[n] = vis[n-1] = true;
    for(int i = n-2;i>0;i--){
        if(k>=i){
            k-= i;
            vis[i] = true;
            nums.push_back(i);
        }
    }
    sort(nums.begin(),nums.end());

    if(k!=0){
        cout<<"-1";
        return 0;
    }

    if(n-1>0)
    nums.push_back(n-1);
    
    for(int i = 1;i<=n;i++){
        if(vis[i]==false)
        nums.push_back(i);
    }
    nums.push_back(n);
        for (int i = 0; i < nums.size(); ++i) {
            cout << nums[i];
            if (i != nums.size() - 1) {  // 如果不是最后一个元素
                cout << " ";
        }
    }
    cout<<endl;
}