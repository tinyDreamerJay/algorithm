#include <iostream>
using namespace std;
int main()
{
	int s,a,b,x;
	cin>>s>>a>>b>>x;
    int totalTime = a+b;
    int last = x%totalTime;
    int ans = 0;
    if(a+b<=x){
    int first = x/totalTime;
    ans += a*first*s;
    x = x - first*totalTime;
    if(a>=x)
    ans += x*s;
    else
    ans += a*s;
    // cout<<a<<" "<<first<<" "<<s;
    }else{
        if(x>a){
            ans = a*s;
        }else{
            ans = x*s;
        }
    }
    cout<<ans;
}
