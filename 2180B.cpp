#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    string ans="";
	    for(int i=0;i<n;i++){
	        string left=arr[i]+ans;
	        string right=ans+arr[i];
	        ans=min(left,right);
	    }
	    cout<<ans<<"\n";
	}

}
