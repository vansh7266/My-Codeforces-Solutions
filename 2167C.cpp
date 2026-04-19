#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   std::vector<int>v(n);
	   for(auto &x:v)cin>>x;
	   
	   int odd=0;
	   int even=0;
	   for(int i=0;i<n;i++){
	       if(v[i]&1) odd++;
	       else even++;
	   }
	   
	   if(odd==n){
	       for(auto it:v) cout<<it<<" ";
	   }
	   else if(even==n){
	       for(auto it:v) cout<<it<<" ";
	   }
	   else{
	       sort(v.begin(),v.end());
	       for(auto it:v) cout<<it<<" ";
	   }
	   cout<<"\n";
	   
	}

}
