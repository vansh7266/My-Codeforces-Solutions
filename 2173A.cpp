#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int cnt=0;
	    int num_k=0;
	    for(int i=0;i<n;i++){
	        
	        if(s[i]=='1'){
	            num_k=k;
	        }
	        else{
	            if(num_k==0){
	                cnt++;
	            }
	            else{
	                num_k--;
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}

}
