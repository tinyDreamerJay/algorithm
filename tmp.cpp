#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    while (cin >> n) {
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        // dp[i][j]: 处理到第i个茶壶，状态为j的最大价值
        // j=0: 当前茶壶没有被覆盖
        // j=1: 当前茶壶被来自左边的盖子覆盖
        // j=2: 当前茶壶被来自自身的盖子覆盖  
        // j=3: 当前茶壶被来自右边的盖子覆盖
        vector<vector<ll>> dp(n + 1, vector<ll>(4, -1e18));
        dp[0][0] = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                if (dp[i][j] == -1e18) continue;
                
                // 当前茶壶的原始盖子状态
                bool has_cover = (b[i] == 1);
                
                // 不移动当前茶壶的盖子
                if (has_cover) {
                    // 盖子留在原地
                    dp[i + 1][2] = max(dp[i + 1][2], dp[i][j] + a[i]);
                    
                    // 盖子移动到左边（只能移动到i-1，但i-1已经处理过）
                    if (i > 0) {
                        // 这个移动已经在之前的状态中考虑了
                    }
                    
                    // 盖子移动到右边
                    if (i < n - 1) {
                        dp[i + 1][3] = max(dp[i + 1][3], dp[i][j]);
                    }
                } else {
                    // 当前茶壶没有原始盖子
                    dp[i + 1][0] = max(dp[i + 1][0], dp[i][j]);
                }
                
                // 处理来自其他茶壶的盖子
                // 来自左边的盖子（当前茶壶被左边茶壶的盖子覆盖）
                if (j == 3) { // 上一个茶壶的盖子移动到右边（当前茶壶）
                    dp[i + 1][0] = max(dp[i + 1][0], dp[i][j] + a[i]);
                }
                
                // 来自自身的盖子（已经处理过）
                
                // 来自右边的盖子（需要特殊处理）
            }
            
            // 简化版：更通用的状态转移
            // 重新定义状态：dp[i][mask]，mask表示最近两个茶壶的盖子状态
        }
        
        // 更准确的状态定义和转移
        // dp[i][s1][s2]: 处理到第i个茶壶，第i-1个茶壶的盖子状态为s1，第i个茶壶的盖子状态为s2
        // s=0: 没有盖子
        // s=1: 有盖子（来自自身或移动）
        
        vector<vector<vector<ll>>> dp2(n + 1, vector<vector<ll>>(2, vector<ll>(2, -1e18)));
        dp2[0][0][0] = 0;
        
        for (int i = 0; i < n; i++) {
            for (int s1 = 0; s1 < 2; s1++) {
                for (int s2 = 0; s2 < 2; s2++) {
                    if (dp2[i][s1][s2] == -1e18) continue;
                    
                    bool has_cover = (b[i] == 1);
                    
                    // 当前 移动到左边、自身、右边
                    for (int move = -1; move <= 1; move++) {
                        if (i + move < 0 || i + move >= n) continue;
                        
                        // 如果移动到左边(i-1)
                        if (move == -1) {
                            if (i > 0) {
                                // 需要检查i-1是否已经被覆盖
                                // 简化处理：只考虑当前茶壶的状态
                            }
                        }
                        // 如果移动到自身(move=0)
                        else if (move == 0) {
                            dp2[i + 1][s2][1] = max(dp2[i + 1][s2][1], dp2[i][s1][s2] + (has_cover ? a[i] : 0));
                        }
                        // 如果移动到右边(i+1)  
                        else if (move == 1) {
                            dp2[i + 1][s2][0] = max(dp2[i + 1][s2][0], dp2[i][s1][s2]);
                        }
                    }
                    
                    // 也考虑不移动当前盖子（如果有的情况）
                    if (!has_cover) {
                        dp2[i + 1][s2][0] = max(dp2[i + 1][s2][0], dp2[i][s1][s2]);
                    }
                }
            }
        }
        
        // 找出最大值
        ll ans = 0;
        for (int s1 = 0; s1 < 2; s1++) {
            for (int s2 = 0; s2 < 2; s2++) {
                ans = max(ans, dp2[n][s1][s2]);
            }
        }
        cout << ans << '\n';
    }
    
    return 0;
}