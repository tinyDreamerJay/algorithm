#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int One,Two,Three;
    int ans = 0;
    for(int i = 0;i<n;i++){
        One = Two = three = 0;
        for(int j = i;j<n;j++){
            if(s[j]=='1') One++;
            if(s[j]=='2') Two++;
            if(s[j]=='3') Three++;
            if(One==Two&&Two==Three)
            ans++;
        }
    }
    cout<<ans;
    return 0;
}