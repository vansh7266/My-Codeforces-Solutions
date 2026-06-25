#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    
    s+=s;
    n*=2;
    
    long long last_green_index = -1;
	long long max_seconds = INT_MIN;
	
	for (int i = n - 1; i >= 0; i--)
		{
			
			if (s[i] == 'g')
				last_green_index = i;

			
			if (s[i] == c)
			{
				long long difference = last_green_index - i;

				max_seconds = max(max_seconds, difference);
			}
		}
	
		cout << max_seconds << endl;
    
    
    
    
    
    
    
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}

}
