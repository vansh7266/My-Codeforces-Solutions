#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long  n;
	    cin>>n;
	    
	    std::vector<long long>ans;
	    long long curr=10;
	    while(curr+1<=n){
	        if(n%(curr+1)==0) ans.push_back(n/(1+curr));
	        curr*=10;
	    }
	    
	    if(ans.size()==0) cout<<0<<endl;
	    else{
	        sort(ans.begin(),ans.end());
	        cout<<ans.size()<<endl;
	        for(auto it:ans) cout<<it<<" ";
	        cout<<endl;
	    }
	}

}
