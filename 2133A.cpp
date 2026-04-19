#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int>v(n);
	    for(auto &x:v) cin>>x;
	    
	    int hash[101]={0};      // 101 remember constraint.
	    for(int i=0;i<n;i++) hash[v[i]]++;
	    
	    bool ans=0;
	    for(int i=0;i<101;i++){
	        if(hash[i]>1){
	            ans=1;
	            break;
	        }
	    }
	    if(ans==0) cout<<"No\n";
	    else cout<<"Yes\n";
	

}
}