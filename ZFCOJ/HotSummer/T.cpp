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
#define int long long
#define rep0(i,n) for (int i = 0; i < (n); i++)
#define rep1(i,n) for (int i = 1; i <= (n); i++)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e6+100;
bool vis;
bool VisNumber[4];
vector<int> path;
int Change_Number(char num){
    if(num=='J') return 11;
    if(num=='Q') return 12;
    if(num=='K') return 13; 
    if(num=='A') return 1; 
    return num-'0';
}
bool dfs(vector<int> nums){
    if(vis) return true;
    if(nums.size()==1){
        if(nums[0]==24){
        vis = true;
        return true;   
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if(i==j)
            continue;
            int n1 = nums[i];
            int n2 = nums[j];
            vector<int> last;
            for (int k = 0; k < nums.size(); k++)
            {
                if(k!=i&&k!=j){
                    last.push_back(nums[k]);
                }
            }
            vector<int> add = last;
            path.push_back(n1);
            path.push_back(-1);
            path.push_back(n2);
            path.push_back(-5);
            path.push_back(n1+n2);
            add.push_back(n1+n2);
            if(dfs(add)) return true;
            path.pop_back();
            path.pop_back();
            path.pop_back();
            path.pop_back();
            path.pop_back();
            dfs(add);
            if(dfs(add)) return true;
 
            if(n1-n2>=0){
                vector<int> jian1 = last;
                path.push_back(n1);
                path.push_back(-2);
                path.push_back(n2);
                path.push_back(-5);
                path.push_back(n1-n2);
                jian1.push_back(n1-n2);
                if(dfs(jian1)) return true;
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                dfs(jian1);
                if(dfs(jian1)) return true;
            }
            if(n2-n1>=0){
                vector<int> jian2 = last;
                path.push_back(n2);
                path.push_back(-2);
                path.push_back(n1);
                path.push_back(-5);
                path.push_back(n2-n1);
                jian2.push_back(n2-n1);
                if(dfs(jian2)) return true;
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                dfs(jian2);
                if(dfs(jian2)) return true;
            }
            vector<int> mul = last;
            path.push_back(n1);
            path.push_back(-3);
            path.push_back(n2);
            path.push_back(-5);
            path.push_back(n1*n2);
            mul.push_back(n1*n2);
            if(dfs(mul)) return true;
            path.pop_back();
            path.pop_back();
            path.pop_back();
            path.pop_back();
            path.pop_back();
            dfs(mul);
            if(dfs(mul)) return true;
 
            if(n2!=0&&n1%n2==0){
                vector<int> div1 = last;
                path.push_back(n1);
                path.push_back(-4);
                path.push_back(n2);
                path.push_back(-5);
                path.push_back(n1/n2);
                div1.push_back(n1/n2);
                if(dfs(div1)) return true;
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                dfs(div1);
                if(dfs(div1)) return true;
            }
 
            if(n1!=0&&n2%n1==0){
                vector<int> div2 = last;
                path.push_back(n2);
                path.push_back(-4);
                path.push_back(n1);
                path.push_back(-5);
                path.push_back(n2/n1);
                div2.push_back(n2/n1);
                if(dfs(div2)) return true;
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                path.pop_back();
                dfs(div2);
                if(dfs(div2)) return true;
            }
        }
    }
    return false;
}
void slove(){
    string a;
    while(getline(cin,a))
    {   
        path.clear();
        vector<int> nums;
        nums.clear();
        vis = false;
        if (a=="0")
        {   
            return;
        }
        int cnt = 1;
        rep0(i,4){
            VisNumber[i] = false;
        }
        a = a+" ";
        for (int i = 0; i < a.size()-1; i++)
        {   
            if (a[i]==' ')
            {
                continue;
            }else
            {   
                if (a[i]=='1'&&a[i+1]=='0')
                {   
                    nums.push_back(10);
                    i++;
                }else
                nums.push_back(Change_Number(a[i]));
            }
        }
        // for(auto num:nums){
        //     ct num<<" ";
        // }
        dfs(nums);
        if(vis){
            ct "Yes" en;
            int cnt =0;
            for(auto p:path){
                cnt++;
                if(p==-1){
                    ct "+";
                }else if(p==-2){
                    ct "-";
                }else if(p==-3){
                    ct "*";
                }else if(p==-4){
                    ct "/";
                }else if(p==-5){
                    ct "=";
                }else{
                    ct p;
                }
                if(cnt!=5)
                ct" ";
                else{
                    cnt = 0;
                    ct '\n';
                }
            }
        }
        else
        ct "No" en;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    slove();
    r0;
}
/**************************************************************
    Problem: 1734
    User: 2024630139 [陈俊杰] 
    Language: C++
    Result: 答案错误
****************************************************************/
