#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long a,b,k;
	    cin>>a>>b>>k;
	    
	    long long g=gcd(a,b);
	    long long x=a/g;
	    long long y=b/g;
	    
	    if(x<=k && y<=k) cout<<"1"<<endl;
	    else cout<<"2"<<endl;
	}

}
