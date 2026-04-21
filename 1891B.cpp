// TLE but logic was correct :
#include <bits/stdc++.h>
using namespace std;
long long fastPow(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>a(n);
        vector<long long>b(q);
        for(auto &x:a) cin>>x;
        for(auto &x:b) cin>>x;
        
        vector<long long>ans(n);
        for(int i=0;i<q;i++){
            long long intval=fastPow(2,b[i]);
            for(int j=0;j<n;j++){
                if(a[j]>=intval){
                    if(a[j]%intval==0){
                    a[j]=a[j]+intval/2;}
                }
                ans[j]=a[j];
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }


}


// Corrected : 
// The Golden Rule: Once you add 2^x−1 to a number, it will never be divisible by 2^x (or any higher power of 2) ever again.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        
        vector<long long>a(n);
        for(auto &x:a) cin>>x;
        
        vector<int> valid_q;
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            if(valid_q.empty() || x < valid_q.back()){
                valid_q.push_back(x);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<valid_q.size();j++){
                long long intval = 1LL << valid_q[j];
                if(a[i] >= intval && a[i] % intval == 0){
                    a[i] = a[i] + (1LL << (valid_q[j] - 1));
                }
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
