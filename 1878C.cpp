#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k,x;
	    cin>>n>>k>>x;
	    ll b=(k*(k+1))/2;
	    
	    ll temp = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
	    
	    if(b<=x && x<=temp) cout<<"Yes\n";
	    else cout<<"No\n";
	    
	    
	    
	    
	}

}
