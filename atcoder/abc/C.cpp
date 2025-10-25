#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<cmath>
#include<stack>
#include<algorithm>
#define int long long
using namespace std;
signed main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int q;
    cin>>q;
    stack<char> brackets;
    int l = 0;
    int r = 0;
    char last;
    while (q--)
    {   
        int op;
        char ch;
        cin>>op;
        if(op==1){
            cin>>ch;
            if(ch=='('){
                l++;
            }else{
                r++;
            }
            brackets.push(ch);
            if(l==r){
                cout<<"Yes"<<endl;
                continue;
            }
        }else{
            if (brackets.empty()) {
                cout << "No" << endl;
                continue;
            }
            brackets.top()=='('?l--:r--;
            brackets.pop();
        }
            if(l!=r){
                cout<<"No"<<endl;
            }else{
                int tl = 0;
                int tr = 0;
                stack<char> arr = brackets;
                vector<char> tmp;
                while(!arr.empty()){
                    tmp.push_back(arr.top());
                    arr.pop();
                }
                reverse(tmp.begin(),tmp.end());
                for(auto c : tmp){
                    if(c=='(')
                    tl++;
                    else if(c==')')
                    tr++;
                    if(tr>tl){
                        cout<<"No"<<endl;
                        break;
                    }
                }
                if(tr==tl){
                    cout<<"Yes"<<endl;
                } 
            }
    }
    
}
// 5 3
//abcde
