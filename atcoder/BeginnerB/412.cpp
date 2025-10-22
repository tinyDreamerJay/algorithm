#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<unordered_map>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e5+10;
int main(){
	string s,t;
	ci s;
  ci t;
	rep(i,s.size()){
		if(i!=0 && isupper(s[i])){
			if(find(t.begin(),t.end(),s[i-1])==t.end()){
				ct "No" en;
				r0;
			}
		}
	}
	ct "Yes" en;
	r0;
}