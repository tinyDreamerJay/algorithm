#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        string s;
        cin>>n>>s;
        int cnt1,cnt2,cnt3;
        cnt1 = cnt2 = cnt3 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
            }
            if(s[i]=='2'){
                cnt2++;
            }
            if(s[i]=='3'){
                cnt3++;
            }
        }
        if(cnt1==0||cnt2==0||cnt3==0){
            cout<<-1<<endl;
            continue;
        }
        int ans = 1e8;
        int l = 0;
        int r = 2;
        cnt1 = cnt2 = cnt3 = 0;
        for(int i=0;i<=2;i++){
            if(s[i]=='1'){
                cnt1++;
            }
            if(s[i]=='2'){
                cnt2++;
            }
            if(s[i]=='3'){
                cnt3++;
            }
        }
        while(r<n){
            if(cnt1 == cnt2&&cnt2 == cnt3){
                ans = 0;
            }
            if(cnt1==2||cnt2==2||cnt3==2){
                ans = min(1,ans);
            }
            if(cnt1==3||cnt2==3||cnt3==3){
                ans = min(2,ans);
            }
            if(s[l]=='1'){
                cnt1--;
            }
            if(s[l]=='2'){
                cnt2--;
            }
            if(s[l]=='3'){
                cnt3--;
            }
            l++;
            r++;
            if(s[r]=='1'){
                cnt1++;
            }
            if(s[r]=='2'){
                cnt2++;
            }
            if(s[r]=='3'){
                cnt3++;
            }
        }
        cout<<ans<<endl;
    }
    
}