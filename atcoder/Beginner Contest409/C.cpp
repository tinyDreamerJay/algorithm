#include<iostream>
using namespace std;
const int N = 3*1e5+5;
int have[N];
int main(void){
    int n,l;
    cin>>n>>l;
    if (l % 3 != 0) {
    cout << 0;
    return 0;
    }
    for (size_t i = 0; i <= l; i++)
    {   
        have[i] = 0;
        /* code */
    }
    have[0] = 1;
    int dis = 0;
    for (size_t i = 2; i <= n; i++)
    {   
        int distance ;
        cin>>distance;
        dis = (dis + distance)%l;
        have[dis]++;
        /* code */
    }
    int len = l/3;
    long long cnt = 0;
    for (size_t i = 0; i <len; i++)
    {   
            cnt += (long long)have[i%l]*have[(i+len)%l]*have[(i+2*len)%l];
    }
    cout<<cnt;
}