#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, k, m;
        cin >> s >> k >> m;
        long long flip = m / k;
        long long a = m % k;

        int b;
        if (flip % 2 == 0)
            b = s;
        else
            b = min(s, k);

        if (a == 0)
            cout << b << endl;
        else
        {
            if ((b - a) < 0)
                cout << 0 << endl;
            else
                cout << b - a << endl;
        }
    }
}
