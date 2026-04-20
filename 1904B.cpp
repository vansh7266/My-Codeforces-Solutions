// the below code exceed time limit but logic is correct : 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long>v(n);
	    for(auto &x:v) cin>>x;
	    
	    for(int i=0;i<n;i++){
	        vector<bool>visit(n,false);
	        long long score=v[i];
	        int cnt=0;
	        bool changed = true;
	        
	        while(changed){
	            changed = false;
	            for(int j=0;j<n;j++){
	                if(j!=i && !visit[j] && score>=v[j]){
	                    score+=v[j];
	                    visit[j]=true;
	                    cnt++;
	                    changed = true;
	                }
	            }
	        }
	        cout<<cnt<<" ";
	    }
	    cout<<"\n";
	}
}



// CODE : 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<long long, int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        vector<long long> pref(n);
        pref[0] = v[0].first;
        for(int i=1;i<n;i++){
            pref[i] = pref[i-1] + v[i].first;
        }

        vector<int> ans(n);
        ans[v[n-1].second] = n-1;

        for(int i=n-2;i>=0;i--){
            if(pref[i] >= v[i+1].first){
                ans[v[i].second] = ans[v[i+1].second];
            } else {
                ans[v[i].second] = i;
            }
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
