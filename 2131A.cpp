#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(auto &x :a)cin>>x;
        for(auto &y :b)cin>>y;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]) ans+=a[i]-b[i];
        }
        cout<<ans+1<<endl;
        
        
        
    }

}
