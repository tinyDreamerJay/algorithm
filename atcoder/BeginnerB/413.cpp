#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define ull unsigned long long
using namespace std;
const int N = 1000;
char ch[N];
ull num[N];
int main(void){
    int n;
    string s;
    cin>>n;
    vector<string> res;
    vector<string> strs;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        strs.push_back(s);
    }
    for(auto str1:strs){
        for(auto str2:strs){
            if(str1==str2){
                continue;
            }
            string ress = str1+str2;
            if(count(res.begin(),res.end(),ress)==0){
                res.push_back(ress);
            }
        }
    }
    cout<<res.size()<<endl;
}