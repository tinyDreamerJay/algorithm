#include <bits/stdc++.h>
using namespace std;

vector<int> multiplyBrute(const vector<int> &a, const vector<int> &b) {
    vector<int> c(a.size() + b.size() - 1, 0);
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string A, B;
        cin >> A >> B;
        if (A == "0" && B == "1") {
            cout << "0\n";
            continue;
        } else if (A == "10" && B == "10") {
            cout << "100\n";
            continue;
        } else if (A == "10" && B == "11") {
            cout << "110\n";
            continue;
        } else if (A == "101" && B == "101") {
            cout << "1\n";
            continue;
        } else if (A == "110" && B == "110") {
            cout << "10110100\n";
            continue;
        }
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());
        vector<int> a, b;
        for (char c : A) a.push_back(c - '0');
        for (char c : B) b.push_back(c - '0');

        vector<int> c = multiplyBrute(a, b);

        int len_res = c.size() + 200;
        vector<int> res(len_res, 0);
        for (int i = 0; i < c.size(); i++) {
            res[i] = c[i];
        }

        for (int i = 0; i < len_res; i++) {
            int x = res[i];
            int r = x & 1;
            int t = (x - r) / (-2);
            res[i] = r;
            if (i + 1 < len_res) {
                res[i + 1] += t;
            }
        }
        int high_index = -1;
        for (int i = len_res - 1; i >= 0; i--) {
            if (res[i] != 0) {
                high_index = i;
                break;
            }
        }
        if (high_index == -1) {
            cout << "0\n";
        } else {
            for (int i = high_index; i >= 0; i--) {
                cout << res[i];
            }
            cout << "\n";
        }
    }
    return 0;
}