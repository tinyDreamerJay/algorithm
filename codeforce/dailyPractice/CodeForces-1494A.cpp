#include<iostream>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int l = 0;
        int r = 0;
        bool f = true;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                l++;
            }
            if(s[i]=='B'){
                l++;
            }
            if(s[i]=='C'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        f = true;
        l = r = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                l++;
            }
            if(s[i]=='B'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='C'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        f = true;
        l = r = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                l++;
            }
            if(s[i]=='B'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='C'){
                l++;
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        f = true;
        l = r = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='B'){
                l++;
            }
            if(s[i]=='C'){
                l++;
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        f = true;
        l = r = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='B'){
                l++;
            }
            if(s[i]=='C'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        f = true;
        l = r = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='B'){
                if(l>0){
                    l--;
                }else{
                    f = false;
                    continue;
                }
            }
            if(s[i]=='C'){
                l++;
            }
        }
        if(l>0) f = false;
        if(f) {cout<<"yes"<<endl;continue;}
        cout<<"no"<<endl;
    }
}