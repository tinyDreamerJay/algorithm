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
        vector<bool> vis(101,false);
        for(int i = 0;i<n;i++){
            int num;
            cin>>num;
            vis[num] = true;
        }
        int res = 0;
        for(int i = 0;i<=100;i++){
            if(!vis[i])
            {
                res = i;
                break;
            }
        }
        cout<<res<<endl;
    }
}