#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(auto &x:v) cin>>x;
	    
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans=__gcd(ans, abs(v[i]-v[n-i-1]));
	    }
	    cout<<ans<<"\n";
	    
	}

}
