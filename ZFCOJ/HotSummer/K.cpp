#include<iostream>
#include<string>
#define int long long
using namespace std;
const int N = 2e5+5;
bool vis[N];
signed main(void){
    int T;
    while (cin>>T)
    {
        while (T--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            char ch1 = 0;
            char ch2 = 0;
            
            for(char ch:s){
                if(ch=='('){
                    ch1++;
                }
                else
                {
                    ch2++;
                }
            }
            if (ch1!=ch2)
            {   
                cout<<-1<<"\n";
                continue;
            }
            int l = 0;
            int r = 0;
            int ans = 0;
            for (size_t i = 0; i < s.size(); i++)
            {   
                //四种可能
                //第一种 遇到右括号 存起来 
                //第二种 遇到左括号 左边没右括号 存起来
                //第三种 遇到左括号 左边有右括号 那就把左括号移动到最左端 移动的次数就为 右括号的个数 然后减去一个括右号
                //第四种 遇到右括号 左边有左括号 那右边的括号就和左边的括号匹配 减去一个左括号
                if (s[i]=='('&&r==0)
                {   
                    l++;
                    /* code */
                }else if (s[i]=='('&&r!=0)
                {   
                    ans += r;
                    r--;
                    /* code */
                }else if(s[i]==')'&&l==0){
                    r++;
                }else if(s[i]==')'&&l!=0){
                    l--;
                }
            }
            cout<<ans<<"\n";
        }
    }
}



// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
// signed main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         if(n%2){
//             cout << "-1" << endl;
//             continue;
//         }
//         int l=0;
//         int r=0;
//         int ans=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('){
//                 if(r==0){
//                     l++;
//                 }
//                 else if(r!=0){
//                     ans+=r;
//                     r--;
//                 }
//             }
//             else if(s[i]==')'){
//                 if(l==0){
//                     r++;
//                 }
//                 else if(l!=0){
//                     l--;
//                 }
//             }
//         }
//         if(l==0&&r==0){
//             cout << ans << endl;
//         }
//         else{
//             cout << "-1" << endl;
//         }
//     }
// }