#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    long long diff = 0;
    // Count mismatched pairs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                diff++;
            }
        }
    }
    
    // Each mismatched pair was counted twice
    diff /= 2;

    if (diff > k) {
        cout << "NO\n";
    } else {
        long long leftovers = k - diff;
        // If grid is odd, we can waste operations on the center cell.
        // If grid is even, we can only waste operations in multiples of 2.
        if (n % 2 == 1 || leftovers % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
