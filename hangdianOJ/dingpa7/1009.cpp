#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return h; // 0=Sat,1=Sun,2=Mon,...,6=Fri
}

void solve() {
    // Precompute day numbers for each month
    int monthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    int T;
    cin >> T;
    while (T--) {
        int k, L, R;
        cin >> k >> L >> R;
        vector<int> cost(367, 0); // cost[day] = number of working days in [L, R]
        
        // Iterate through all possible days of the year (1..366)
        for (int month = 1; month <= 12; ++month) {
            int max_day = monthDays[month];
            if (month == 2 && isLeap(2025)) max_day = 29; // Handle leap year for February
            
            for (int day = 1; day <= max_day; ++day) {
                // Calculate day of year (1..366)
                int day_of_year = day;
                for (int m = 1; m < month; ++m) {
                    day_of_year += monthDays[m];
                    if (m == 2 && isLeap(2025)) day_of_year += 1; // Add extra day for leap year February
                }
                
                // Count working days for this date in [L, R]
                int cnt = 0;
                for (int year = L; year <= R; ++year) {
                    // Skip if Feb 29 in non-leap year
                    if (month == 2 && day == 29 && !isLeap(year)) continue;
                    
                    int weekday = getDayOfWeek(year, month, day);
                    if (weekday >= 2 && weekday <= 6) { // Monday to Friday
                        cnt++;
                    }
                }
                cost[day_of_year] = cnt;
            }
        }
        
        // Handle Feb 29 separately for leap years
        if (isLeap(2025)) {
            int day_of_year = 60; // Feb 29 is day 60 in leap year
            int cnt = 0;
            for (int year = L; year <= R; ++year) {
                if (!isLeap(year)) continue;
                int weekday = getDayOfWeek(year, 2, 29);
                if (weekday >= 2 && weekday <= 6) {
                    cnt++;
                }
            }
            cost[day_of_year] = cnt;
        }
        
        // Sort and sum first k smallest
        sort(cost.begin() + 1, cost.end());
        int ans = 0;
        for (int i = 1; i <= k; ++i) {
            ans += cost[i];
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}