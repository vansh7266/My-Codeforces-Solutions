#include <iostream>
using namespace std;

int get_pref_xor(int n) {
    int rem = n % 4;
    if (rem == 0) return 0;
    if (rem == 1) return n - 1;
    if (rem == 2) return 1;
    return n;
}

void solve() {
    int a, b;
    cin >> a >> b;
    
   
    int c = get_pref_xor(a);
    
    if (c == b) {
        cout << a << "\n";
    }
    else if ((c ^ b) != a) {
        cout << a + 1 << "\n";
    }
    else {
        cout << a + 2 << "\n";
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
