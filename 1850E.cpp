#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>s(n);
        for(auto &x:s) cin>>x;
        
        ll l=1, r=1e9, ans=-1;
        
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll summ=0;
            
            for(int i=0;i<n;i++){
                summ+=(s[i]+2*mid)*(s[i]+2*mid);
                
                if(summ>c) break;
            }
            
            if(summ>c){
                r=mid-1;
            }
            else{
                ans=mid;
                l=mid+1;
            }
        }
        
        cout<<ans<<"\n";
    }


}
