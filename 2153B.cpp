#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x&y;
	    int b=x&z;
	    int c=y&z;
	    if(a==b && a==c && b==c){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}

}
