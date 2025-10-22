#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
#define int long long
#define rep0(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
#define ci cin >>
#define ct cout <<
#define en << '\n'
#define r0 return 0
#define Inf32 1000000005
#define Inf64 4000000000000000001LL
const int N = 1e5 + 100;

struct Interval {
    int Left;
    int Right;
    int score;
};

bool cmp(const Interval &a, const Interval &b) {
    return a.Right < b.Right;
}

void slove() {
    int T;
    ci T;
    while (T--) {
        int n;
        ci n;
        int m = 2 * n;
        vector<int> sco(m);
        rep0(i, m) ci sco[i];
        
        unordered_map<int, vector<int>> pos_map;
        rep0(i, m) {
            int num;
            ci num;
            pos_map[num].push_back(i);
        }
        
        vector<Interval> intervals;
        for (auto &entry : pos_map) {
            int num = entry.first;
            vector<int> &positions = entry.second;
            int L = positions[0];
            int R = positions[1];
            int score = 0;
            for (int j = L; j <= R; ++j) {
                score += sco[j];
            }
            intervals.push_back({L, R, score});
        }
        
        sort(intervals.begin(), intervals.end(), cmp);
        
        vector<int> dp(m, 0);
        vector<int> max_dp(m, 0);
        int current_max = 0;
        int interval_idx = 0;
        
        for (int i = 0; i < m; ++i) {
            if (i > 0) {
                max_dp[i] = max_dp[i - 1];
            }
            while (interval_idx < intervals.size() && intervals[interval_idx].Right == i) {
                int L = intervals[interval_idx].Left;
                int score = intervals[interval_idx].score;
                if (L > 0) {
                    score += max_dp[L - 1];
                }
                if (score > max_dp[i]) {
                    max_dp[i] = score;
                }
                ++interval_idx;
            }
            if (i > 0 && max_dp[i] < max_dp[i - 1]) {
                max_dp[i] = max_dp[i - 1];
            }
        }
        
        ct max_dp[m - 1] en;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    slove();
    r0;
}