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
#define rep0(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 2e5+100;
int calculate_ops(string s, char start) {
    int n = s.size();
    int ops = 0;
    for (int i = 0; i < n - 1; ++i) {
        char expected = (i % 2 == 0) ? start : (start == '0' ? '1' : '0');
        if (s[i] != expected) {
            s[i] = (s[i] == '0' ? '1' : '0');
            s[i+1] = (s[i+1] == '0' ? '1' : '0');
            ops++;
        }
    }
    char last_expected = ((n-1) % 2 == 0) ? start : (start == '0' ? '1' : '0');
    if (s[n-1] != last_expected) {
        return -1; 
    }
    return ops;
}

void solve() {
    int T;
    ci T;
    while (T--) {
        int n;
        ci n;
        string s;
        ci s;
        if (n == 1) {
            ct 0 en;
            continue;
        }
        bool is_good = true;
        rep0(i, n-1) {
            if (s[i] == s[i+1]) {
                is_good = false;
                break;
            }
        }
        if (is_good) {
            ct 0 en;
            continue;
        }
        int ops1 = calculate_ops(s, '0'); 
        int ops2 = calculate_ops(s, '1');
        int ans = -1;
        if (ops1 != -1 && ops2 != -1) {
            ans = min(ops1, ops2);
        } else if (ops1 != -1) {
            ans = ops1;
        } else if (ops2 != -1) {
            ans = ops2;
        }
        ct ans en;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
    r0;
}
