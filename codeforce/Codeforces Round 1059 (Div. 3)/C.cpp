#include<iostream>
#include<string>
#include<vector>
#define int long long
using namespace std;
long long binaryToDecimal(const string& bin) {
    long long decimal = 0;
    int len = bin.length();
    for (int i = 0; i < len; ++i) {
        // 二进制字符串从左到右是高位到低位，需计算其对应的幂次
        int bit = bin[i] - '0'; // 将字符'0'/'1'转换为数字0/1
        int power = len - 1 - i; // 第i位对应的2的幂次
        decimal += bit * (1LL << power); // 1LL << power 等价于 2^power
    }
    return decimal;
}
signed main(void){
    int t;
    cin>>t;
    while (t--)
    {   
        long long n;
        cin>>n;
        int m;
        cin>>m;
        if(n==0){
            cout<<"yes"<<endl;
            continue;
        }
        string s1;
        while(n){
            s1 = char(n%2 + '0')+s1;
            n/=2;
        }
        string s2;
        while(m){
            s2 = char(m%2 + '0')+s2;
            m/=2;
        }
        if(s1.size()==s2.size()){
            string res="";
            for(int i = 0;i<s1.size();i++){
                if(s1[i]!=s2[i]){
                    res = res + '1';
                }else if(res!=""&&s1[i]==s2[i]){
                    res = res + '0';
                }
        }
            int num = binaryToDecimal(res);
            cout<<num<<endl;
        }
        if(s1.size()<s2.size())
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(s1.size()>s2.size()){
            string res="";
            for(int i = 0;i<s1.size();i++){
                if(s1[i]!=s2[i]){
                    res = res + '1';
                }else if(res!=""&&s1[i]==s2[i]){
                    res = res + '0';
                }
        }
        ///10110
        /// 0111
        ///10001
        //10000
    }
    
}