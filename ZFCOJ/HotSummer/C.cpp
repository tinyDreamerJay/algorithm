#include<iostream>
#include<vector>
using namespace std;
int n;
int vis[25];
vector<int> nums;
void dfs(int num){
    if (num>n)
    {   
        return;
        /* code */
    }
    if (num==n)
    {   
        for (int i = 0; i < nums.size(); i++)
        {   
            cout<<nums[i];
            if (i!=nums.size()-1)
            {   
                cout<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for (size_t i = 1; i <= n; i++)
    {   
        if (!nums.empty()&&nums.back()==i)
        {   
            continue;
            /* code */
        }
        nums.push_back(i);
        dfs(num+i);
        nums.pop_back();
    }
}
int main(void){
    
    ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    while (cin>>n)
    {   
        for (int i = 0; i < 25; i++)
        {
            vis[i] = false;
        }
        dfs(0);
    }
}