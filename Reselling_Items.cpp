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
    int nc, k;
    cin >> nc >> k;

    vector<int> ar(nc);

    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    int ss = 0;
    sort(ar.rbegin(), ar.rend());
    for (int i = 0; i < nc && k; i++)
    {
        if ((ar[i]- 5)>=1)
        {
            ss += (ar[i] - 5);  k--;
            ar[i] = 0;
        }
    }

    for (int i = 0; i < nc; i++)
    {
        if (ar[i] && ar[i] >= 11)
        {
            ss += (ar[i] - 10);
        }
    }

    cout << ss << "\n";
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
