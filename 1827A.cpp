#include <bits/stdc++.h>
using namespace std;

int main() {
 
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        
        long long ans = 1;
        long long mod = 1e9 + 7;
        int j = 0;
        
        for(int i = 0; i < n; i++) {
            while(j < n && a[j] > b[i]) {
                j++;
            }
            
            long long choices = j - i;
            
            if(choices <= 0) {
                ans = 0;
                break;
            }
            
            ans = (ans * choices) % mod;
        }
        
        cout << ans << "\n";
    }
    return 0;
}
