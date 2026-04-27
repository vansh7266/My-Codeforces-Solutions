// Logic and Code is Correct, but TLE 
#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main() {
	ll n,q;
	cin>>n>>q;
	
	vector<ll>v(n);
	for(auto &x:v) cin>>x;
	
	vector<ll>t(q);
	for(auto &x: t) cin>>x;
	
	
	for(int i=0;i<q;i++){
	    for(int j=0;j<n;j++){
	        
	        if(t[i]==v[j]){
	            cout<<j+1<<" ";
	            vector<ll>v1;
	            for(int k1=0;k1<j;k1++){
	                v1.push_back(v[k1]);
	            }
	            
	            vector<ll>v2;
	            v2.push_back(v[j]);
	            
	            vector<ll>v3;
	            for(int k2=j+1;k2<n;k2++){
	                v3.push_back(v[k2]);
	            }
	            
	            v2.insert(v2.end(), v1.begin(), v1.end());
	            v2.insert(v2.end(), v3.begin(), v3.end());
	            
	            v=v2;
	            

	            break;
	            
	            
	            
	        }
	        
	        
	        
	        
	    }
	    // inner loops ends
	}
	// outer loop ends




  // correct code without TLE :
  #include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	
	vector<int>first_pos(51,n+1);
	for (int i=1;i<=n;i++) { 
		int color;
		cin>>color;
		if (first_pos[color]==n+1) {
			first_pos[color]=i;
		}
	}
	
	while(q--){ 
		int color;
		cin>>color;
		int ans=first_pos[color];
		for (int i=1;i<=50;i++) {
			if (first_pos[i]<ans) {
				first_pos[i]++;
			}
		}
		first_pos[color] = 1;
		cout << ans << " ";
	}

	cout << endl;
	
	
	
	            

	     
	

}

	

}
