#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(const string& a, const string& b) {
    return a + b < b + a;
}

int main() {
    int n;
    cin >> n;
    vector<string> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end(), compare);
    for (const string& num : nums) {
            cout << num;
        }
        cout << endl;
    
    return 0;
}