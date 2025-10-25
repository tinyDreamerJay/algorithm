#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int prev = 0;  
    bool isAsleep = false;
    for (int i = 0; i < n; i++) {
        int current;
        cin >> current;
        int interval = current - prev;
        if (interval > s) {
            isAsleep = true;
            break;
        }
        prev = current; 
    }
    cout << (isAsleep ? "No" : "Yes") << endl;
    return 0;
}