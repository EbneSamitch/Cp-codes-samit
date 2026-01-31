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
    int nc, q;
    cin >> nc >> q;

    vector<pair<int, int>> ar(nc, {0, 0});
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i].first;
    }
    pair<int, int> p1 = {-1, -1};
    int s = 0;
    for (int i = 0; i < nc; i++)
    {
        s += ar[i].first;
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y, z;
            cin >> y >> z;
            y--;
            if (ar[y].second > p1.second)
            {

                s += (z - ar[y].first);
            }
            else
            {

                s += (z - p1.first);
            }
            ar[y].first = z;
            ar[y].second = i + 1;
        }
        else
        {
            int y;
            cin >> y;
            p1.first = y;
            p1.second = i + 1;
            s = nc * p1.first;
        }
        cout << s << "\n";
    }
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

    // int tc;
    // cin >> tc;

    // while (tc--)
    {
        samsolveit();
    }

    return 0;
}
