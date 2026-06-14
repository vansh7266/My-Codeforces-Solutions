#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        string s; cin >> s;

        vector<ll> cost(n + 1, -1);

        for (ll d = 1; d <= n; d++) {
            for (ll m = d; m <= n; m += d) {
                if (s[m - 1] == '1') break;        // d is now poisoned forever
                if (cost[m] == -1) cost[m] = d;    // smallest valid divisor wins
            }
        }

        ll ans = 0;
        for (ll i = 1; i <= n; i++)
            if (s[i - 1] == '0') ans += cost[i];

        cout << ans << "\n";
    }
}
