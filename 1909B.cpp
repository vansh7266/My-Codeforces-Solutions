#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int b=0;b<=60;b++){
            int cnt=0;
            for(int i=0;i<n;i++) cnt+=((a[i]>>b)&1);
            if(cnt>0 && cnt<n){
                cout<<(1LL<<(b+1))<<"\n";
                break;
            }
        }
    }
    return 0;
}


/*
Step 1: Understand What mod k Actually Does
Take a number like 22 = 10110 in binary.

22 mod 2 = 0 (last 1 bit)
22 mod 4 = 2 (last 2 bits → 10)
22 mod 8 = 6 (last 3 bits → 110)
22 mod 16 = 6 (last 4 bits → 0110)

Key realization: a mod 2^b gives you exactly the last b bits of a.
This is not a coincidence — it's fundamental. Division by a power of 2 in binary just strips the top bits.

Step 2: Think About a Simpler k
Instead of trying arbitrary k, what if k is always a power of 2?
Let k = 2^b. Then a_i mod 2^b = last b bits of a_i.
Now ask: when do all elements map to exactly 2 distinct values?

Step 3: The Bit-by-Bit Observation
Since all a_i are distinct, they can't all be identical. So somewhere in their binary representations, they must differ.
Let's find the lowest bit position where the numbers are not all the same.
Example: [8, 15, 22, 30]
 8 = ...01000
15 = ...01111
22 = ...10110
30 = ...11110
         ^^^^
         bit positions: 3,2,1,0
Check bit 0: → 0, 1, 0, 0 → not all same! → stop here, b = 0
Now take k = 2^(b+1) = 2^1 = 2.

8 mod 2 = 0
15 mod 2 = 1
22 mod 2 = 0
30 mod 2 = 0

Result: {0, 1} — exactly 2 distinct values ✓

Step 4: Why Does This Always Give Exactly 2?
This is the crucial "why" — think carefully.
If b is the lowest bit where numbers differ, then bits 0 through b-1 are identical across all elements. Call that common lower part r.
So every a_i looks like one of:

...0 | r (bit b is 0, lower bits are r)
...1 | r (bit b is 1, lower bits are r)

Now take mod 2^(b+1) (extract last b+1 bits):

Group 1 → always gives r
Group 2 → always gives r + 2^b

Exactly 2 distinct values. No more, no less.
And since all a_i are distinct, such a bit b always exists — the problem's guarantee that a solution exists is automatic.

Step 5: The Algorithm
for b = 0, 1, 2, ..., 60:
    count how many a_i have bit b set
    if count > 0 AND count < n:        ← some have it, some don't
        answer is 2^(b+1)
        stop

Code
*/
