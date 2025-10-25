#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100005;
int nums[N];
    int n;
int findIdx(int a){
    for (size_t i = 0; i < n; i++)
    {   
        if (nums[i]>=a)
        {
            return i;
            /* code */
        }
        
        /* code */
    }
    return -1;
}
int main(void){
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {   
        cin>>nums[i];
        /* code */
    }
    int num = 0;
    sort(nums,nums+n);
    int cnt;
    while (num<=100)
    {   
        cnt = 0;
        for (size_t i = 0; i < n; i++)
        {   
            if (nums[i]>=num)
            {   
                cnt++;
                /* code */
            }
            if (cnt>=num)
            {
                break;
                /* code */
            }
            
            /* code */
        }
        if (cnt<num)
        {   
            break;
            /* code */
        }
        
        num++;
        /* code */
    }
    cout<<num-1;
}