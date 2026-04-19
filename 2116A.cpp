#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int odd=min(b,d);
	    int even=min(a,c);
	    if(odd<=even) cout<<"Gellyfish\n";
	    else cout<<"Flower\n";
	}

}
