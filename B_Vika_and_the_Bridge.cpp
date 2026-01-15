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

void samsolveit()
{
    int nc, x;
    cin >> nc >> x;

    vector<vector<int>> ar(x + 1);

    for (int i = 0; i < nc; i++)
    {
        int a;
        cin >> a;
        ar[a].push_back(i + 1);
    }

    int ans = nc;
    for (int i = 1; i <= x; i++)
    {
        int mx = 0, smx = 0;
        int pv = 0;
        vector<int> &v = ar[i];
        for (int j = 0; j < (int)v.size(); j++)
        {
            int crm = v[j] - pv - 1;
            if (crm > mx)
                smx = mx, mx = crm;
            else if (crm > smx)
                smx = crm;
            pv = v[j];
        }
        int lst = nc - pv;
        if (lst > mx)
            smx = mx, mx = lst;
        else if (lst > smx)
            smx = lst;
        smx = max(mx / 2, smx);
        ans = min(smx, ans);
    }
    cout << ans << "\n";
}
// I also did with binary search.
/*
Ebnesamit
*/
int32_t main()
{
    opscode();

    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif

    int tc;
    cin >> tc;

    while (tc--)
    {
        samsolveit();
    }

    return 0;
}
