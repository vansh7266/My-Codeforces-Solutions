#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    ll sum=0;
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]<0) {cnt++; v[i]=-v[i];}
	        sum+=v[i];
	    }
	    sort(v.begin(),v.end());
	    if(cnt&1){sum=sum-2*v[0];}
	    cout<<sum<<"\n";
	    
	    

}


}
