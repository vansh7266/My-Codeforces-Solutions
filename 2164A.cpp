#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long mn = LLONG_MAX, mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
        }

        long long x;
        cin >> x;

        if (mn <= x && x <= mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
