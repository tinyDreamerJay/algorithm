#include<iostream>
#include<string>
using namespace std;
int main(void){
  string s;
  cin>>s;
  string s1="";
  string s2="";
  string res="";
  int len = (s.size()+1)/2-1;
  for(int i = 0;i<len;i++){
    s1 = s1+s[i];
  }
  for(int i = len+1;i<s.size();i++){
    s2 = s2+s[i];
  }
  res = s1+s2;
  cout<<res;
}