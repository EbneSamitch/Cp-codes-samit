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
    int nc;
    cin >> nc;

    vector<vector<int>> ar(nc, vector<int>(nc));
    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nc; j++)
            cin >> ar[i][j];
    }
    map<int, int> mp;

    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nc; j++)
            mp[ar[i][j]]++;
    }
    int s = nc * nc;
    for (auto &m : mp)
    {
        // dbg(m.first);
        // dbg(m.second);
        if (m.second > s - nc)
        {
            NO;
            return;
        }
    }
    YES;
}

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
