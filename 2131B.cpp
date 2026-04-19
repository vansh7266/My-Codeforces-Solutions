#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        
        
        if(n==2){
            ans.push_back(-1);
            ans.push_back(2);
        }
        else if(n==3){
            ans.push_back(-1);
            ans.push_back(3);
            ans.push_back(-1);
        }
        else{
            for(int i=0;i<n-1;i++){
                if(i&1){
                    ans.push_back(3);
                }
                else ans.push_back(-1);
            }
            if(n&1) ans.push_back(-1);
            else ans.push_back(2);
        }
        
        for(auto it:ans) cout<<it<<" ";
        cout<<endl;
        
        
        
        
    }

}
