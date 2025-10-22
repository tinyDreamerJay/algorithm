#include <iostream>
using namespace std;

// 计算表达式的值
int calc(char a, char op, char b) {
    int x = a - '0', y = b - '0';
    if (op == '+') return x + y;
    if (op == '-') return x - y;
    if (op == '*') return x * y;
    return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        char a = s[0], op = s[1], b = s[2];
        bool possible = false;
        if (op == '+' || op == '*') {
            possible = true;
        } else if (op == '-') {
            if (a == b) {
                possible = false;
            }
        }
        
        cout << (possible ? "Yes" : "No") << endl;
    }
    return 0;
}