#include <bits/stdc++.h>
using namespace std;
# define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        vector<int>idx(1005, -1);
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            idx[x] = i;
        }
        
        ll sum = -1;
        for(int i = 1; i <= 1000; i++){
            if(idx[i] != -1){
                for(int j = i; j <= 1000; j++){
                    if(idx[j] != -1 && gcd(i, j) == 1){
                        sum = max(sum, (ll)(idx[i] + idx[j]));
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }
}
