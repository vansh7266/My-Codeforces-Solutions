#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,a,b;
	    cin>>n>>k>>a>>b;
	    
	    vector<ll>x(n+1),y(n+1);
	    
	for (int i=1;i<=n;i++) {
		cin>>x[i]>>y[i];
	}
	
	
	// direct distance from a to b.
	ll ans1=abs(x[a]-x[b])+abs(y[a]-y[b]);
	
	// distance from a to major cities 
	// distance from b to major cities
	ll min_a=1e17;
	ll min_b=1e17;
	for(int i=1;i<=k;i++){
	    min_a=min(min_a,abs(x[a]-x[i])+abs(y[a]-y[i]));
	    min_b=min(min_b,abs(x[b]-x[i])+abs(y[b]-y[i]));
	}
	
	ll ans2=min_b+min_a;
	cout<<min(ans1,ans2)<<"\n";
	
	
	
	
	
	}

}
