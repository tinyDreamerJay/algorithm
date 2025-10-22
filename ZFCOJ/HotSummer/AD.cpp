#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;
const int BITS = 60;

int prefix[BITS][MAXN];
long long a[MAXN];

int main(){
    int n, q;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (scanf("%d%d", &n, &q) == 2) {
        for (int b = 0; b < BITS; ++b) {
            prefix[b][0] = 0;
        }
        for (int i = 1; i <= n; ++i) {
            scanf("%lld", &a[i]);
            for (int b = 0; b < BITS; ++b) {
                prefix[b][i] = prefix[b][i-1] + ((a[i] >> b) & 1);
            }
        }
        while (q--) {
            int l, r;
            long long x;
            scanf("%d%d%lld", &l, &r, &x);
            long long res = x;
            for (int b = BITS - 1; b >= 0; --b) {
                if (!((res >> b) & 1)) {
                    if (prefix[b][r] - prefix[b][l-1] > 0) {
                        res |= (1LL << b);
                    }
                }
            }
            printf("%lld\n", res);
        }
    }
    return 0;
}