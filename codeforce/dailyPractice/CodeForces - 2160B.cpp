#include<iostream>
#include<vector>
#define int long long
using namespace std;
vector<int> a;
vector<int> ans;        
signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        a.clear();
        for(int i = 0;i<n;i++){
            int num;
            cin>>num;
            a.push_back(num);
        }
        ans.clear();
        ans.push_back(1);
        int num = 1;
        for(int i = 1;i<n;i++){
            if(a[i]-a[i-1]>ans.size()){
                ans.push_back(++num);
            }else{
                int tmp = ans[i-(a[i]-a[i-1])];
                ans.push_back(tmp);
            }
        }
        for(auto b:ans){
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
// 1 2 1 2 1
// 1 3 5 7 9 