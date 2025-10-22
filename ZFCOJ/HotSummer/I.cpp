#include<iostream>
#include<map>
#include<queue>
using namespace std;
const int N =1e5+5;
int a[N];
int main(void){
    int n;
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    while (cin>>n)
    {   
        priority_queue<int,vector<int>,less<int>> Max;
        priority_queue<int,vector<int>,greater<int>>Min;
        vector<int> media;
        for (int i = 1; i <= n; i++)
        {   
            cin>>a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (Max.empty()||a[i]<=Max.top())
            {   
                Max.push(a[i]);
            }else{
                Min.push(a[i]);
            }
            if (Min.size()>Max.size())
            {   
                Max.push(Min.top());
                Min.pop();
                /* code */
            }else if(Max.size()>Min.size()+1){
                Min.push(Max.top());
                Max.pop();
            }
            if (i%2==1)
            {   
                media.push_back(Max.top());
                /* code */
            }
            
        }
        for(auto m:media){
            cout<<m<<" ";
        }
        cout<<"\n";
        while (!Max.empty())
        {
            Max.pop();
        }
        while (!Min.empty())
        {
            Min.pop();
        }
    }
}