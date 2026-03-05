#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long x = n;
        long long ans = 1;

        for (long long p = 2; p * p <= x; ++p) {
            if (x % p == 0) {
                ans *= p;
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) ans *= x;

        cout << ans << "\n";
    }
    return 0;
}
