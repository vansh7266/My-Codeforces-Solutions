#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x, d, n;
        cin >> r >> x >> d >> n;
        string s;
        cin >> s;

        int ans = 0;
        for (auto it : s)
        {
            if (it == '1')
            {
                ans++;
                r -= d;
            }
            else
            {
                if (r < x)
                {
                    ans++;
                    r -= d;
                }
            }
        }

        cout << ans << endl;
    }
}
