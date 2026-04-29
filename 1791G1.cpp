#include <bits/stdc++.h>
using namespace std;

int main() {
   
    
    int t;
    cin >> t;
    while(t--){
        int n;
        long long c;
        cin >> n >> c;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            a[i] = a[i] + (i + 1);
        }
        
        sort(a.begin(), a.end());
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(c >= a[i]){
                c -= a[i];
                ans++;
            } else {
                break;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}
