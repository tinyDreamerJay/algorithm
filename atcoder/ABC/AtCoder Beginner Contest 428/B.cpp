#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
	int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    map<string,int> m;
    for(int i = 0;i<=s.size()-k;i++){
        string tmp = "";
        for(int j=i;j<i+k;j++){
            tmp = tmp + s[j];
        }
        m[tmp]++;
    }
    int Max = 0;
    for(auto str:m){
        Max = max(str.second,Max);
    }
    vector<string> ans;
    for(auto str:m){
        if(str.second==Max){
            ans.push_back(str.first);
        }
    }
    cout<<Max;
    cout<<endl;
    for(auto str:ans){
        cout<<str<<" ";
    }
}
// 5 3
//abcde
