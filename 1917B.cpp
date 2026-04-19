#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<bool>check(26,false);
	    long long ans1=0;
	    long long ans2=0;
	    for(int i=0;i<n;i++){
	        int char_index=s[i]-'a';
	        
	        if(!check[char_index]){
	            check[char_index]=true;
	            ans1++;
	        }
	        
	        ans2+=ans1;
	    }
	    
	    cout<<ans2<<"\n";
	}

}
