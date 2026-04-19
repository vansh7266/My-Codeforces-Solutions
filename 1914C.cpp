#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>a(n);
	    vector<int>b(n);
	    for(auto &x :a) cin>>x;
	    for(auto &x:b) cin>>x;
	    
	    int maxb=0,ans=0,sum=0;
	    for(int i=0;i<min(n,k);i++){
	        sum+=a[i];
	        maxb=max(maxb,b[i]);
	        ans=max(ans,sum+(k-i-1)*maxb);
	        
	    }
	    cout<<ans<<"\n";
	}

}
