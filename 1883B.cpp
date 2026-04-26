#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    string s;
	    cin>>n>>k;
	    cin>>s;
	    int hash[26]={0};
	    for(int i=0;i<n;i++){
	        hash[s[i]-'a']++;
	    }
	    int cnt=0;
	    for(int i=0;i<26;i++){
	        if(hash[i]%2!=0) cnt++;
	    }
	    if(cnt>k+1) cout<<"No\n";
	    else cout<<"Yes\n";
	    
	}

}
