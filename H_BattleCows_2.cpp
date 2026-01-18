// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ //
#include <bits/stdc++.h>
using namespace std;

#define opscode() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
typedef long long ll;

void samsolveit()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> ans(n);

    for (int i = 0; i < n; i++)
    {
        // Build array without cow i
        vector<int> b;
        for (int j = 0; j < n; j++)
            if (j != i) b.push_back(a[j]);

        int m = n - 1;

        // prefix sums of b
        vector<ll> pref(m + 1, 0);
        for (int j = 0; j < m; j++)
            pref[j + 1] = pref[j] + b[j];

        // function to check if position x is valid
        auto ok = [&](int x)
        {
            ll cur = a[i];
            int cheats = 0;

            for (int j = x; j < m; j++)
            {
                if (cur < b[j]) cheats++;
                if (cheats > k) return false;
                cur += b[j];
            }
            return true;
        };

        // binary search leftmost valid
        int L = 0, R = m, left = m + 1;
        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (ok(mid))
            {
                left = mid;
                R = mid - 1;
            }
            else L = mid + 1;
        }

        // binary search rightmost valid
        L = 0; R = m;
        int right = -1;
        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (ok(mid))
            {
                right = mid;
                L = mid + 1;
            }
            else R = mid - 1;
        }

        if (left <= right)
            ans[i] = right - left + 1;
        else
            ans[i] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

/*
Ebnesamit
*/
int32_t main()
{
    opscode();

    int tc;
    cin >> tc;
    while (tc--)
        samsolveit();

    return 0;
}