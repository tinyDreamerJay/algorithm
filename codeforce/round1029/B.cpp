#include<iostream>
using namespace std;
int nums[200005];
int main(void){
    int t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while (t--)
    {       
        int num;
        cin>>num;
        int l = 1;
        int r = num;
        int jihou = 1;
        while (l<=r)
        {   
            if (jihou%2==1)
            {   
                nums[r] = jihou;
                r--;
                /* code */
            }
            if (jihou%2==0)
            {   
                nums[l] = jihou;
                l++;
                /* code */
            }
            jihou++;
            /* code */
        }
        /* code */
        for (size_t i = 1; i <= num; i++)
        {   
            cout<<nums[i];
            if (i!=num)
            {   
                cout<<" ";
                /* code */
            }
            
            /* code */
        }
        cout<<endl;
    }
    
}