#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for(auto &x:a) cin>>x;
	    int maxCount=0,count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==0){
	            count++;
	        }
	        else {
	            count=0;
	        }
	        maxCount=max(maxCount,count);
	    }
	    
	    
	    cout<<maxCount<<"\n";
	}

}
