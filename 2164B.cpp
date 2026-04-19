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
	   
	   int ans1=-1;
	   int ans2=-1;
	   
	   for(int i=0;i<n-1;i++){
	       for(int j=i+1;j<n;j++){
	           int a=v[j]%v[i];
	           if(a%2==0){
	               ans1=v[i];
	               ans2=v[j];
	               break;
	           }
	       }
	   }
	   
	   if(ans1==-1 || ans2==-1) cout<<-1<<endl;
	   else cout<<ans1<<" "<<ans2<<endl;
	   
	  

}
    
}
