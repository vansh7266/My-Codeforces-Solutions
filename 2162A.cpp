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
        std::vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, v[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int a = v[i];
            for (int j = i + 1; j < n; j++)
            {
                a = a + v[j];
                ans = max(ans, a / (j - i + 1));
            }
        }

        cout << ans << endl;
    }
}
