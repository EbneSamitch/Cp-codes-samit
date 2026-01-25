// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ //
#include <bits/stdc++.h>

using namespace std;

#define opscode()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
#define dbg(p) cerr << #p << " " << p << "\n";
#else
#define dbg(p)
#endif

#define YES cout << "YES\n"
#define NO cout << "NO\n"
typedef long long ll;
typedef double dol;
#define pi acos(-1)
#define int long long

// int sambinc(int m, int x)
// {
//     if (m <= x)
//         return 0;
//     else
//         return 1;
// }

void samsolveit()
{
    int nc;
    cin >> nc;

    vector<int> ar(nc), br(nc), ps(nc, 0);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < nc; i++)
    {
        cin >> br[i];
    }
    sort(ar.begin(), ar.end());
    ps[0] = br[0];
    for (int i = 1; i < nc; i++)
    {
        ps[i] = ps[i - 1] + br[i];
        // dbg(ps[i]);
    }
    auto sambinc = [&](int m)
    {
        auto it = lower_bound(ar.begin(), ar.end(), m);

        int sw = nc - (it - ar.begin());
dbg(sw);
        int fnd = upper_bound(ps.begin(), ps.end(), sw) - ps.begin();
dbg(fnd);
        return fnd;
    };
    int l = 0, r = nc;
    int mx = 0;
    while (l < r)
    {
        int m = ar[l];
        int fn = sambinc(m);
        dbg(m);
        dbg(fn);
        mx = max(m*fn, mx);
        dbg(l);
        dbg(mx);
        l++;
    }
    cout << mx << "\n";
}

/*
Ebnesamit
*/
int32_t main()
{
    opscode();

    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    int tc;
    cin >> tc;

    while (tc--)
    {
        samsolveit();
    }

    return 0;
}