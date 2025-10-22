#include<iostream>
#include<vector>
using namespace std;
const int Max = 1e5;
vector<int> list[Max];
int main(void){
    int n;
    cin>>n;
    int k = 1;
    while (k*(k-1)/2<=n)
    {
        k++;
    }
    k--;
    int nowId = 1;
    for(int i = 1;i<=k;i++){
        for(int j = i+1;j<=k;j++){
            list[i].push_back(nowId);
            list[j].push_back(nowId);
            nowId++;
        }
    }
    cout<<k<<endl;
    for(int i = 1;i<=k;i++){
        for(auto num : list[i]){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}