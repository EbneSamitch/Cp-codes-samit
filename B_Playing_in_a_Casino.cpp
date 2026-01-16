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
    int nc, mc;
    cin >> nc >> mc;

    vector<vector<int>> ar(mc, vector<int>(nc));
    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < mc; j++)
        {
            cin >> ar[j][i];
            // cout<<ar[i][j]<<" ";
        }
        // cout<<"\n";
    }
    // vector<vector<int>> ar(mc, vector<int>(nc));
    // for (int i = 0; i < mc; i++)
    // {
    //     for (int j = 0; j < nc; j++)
    //     {
    //         ar[i][j] = ar[j][i];
    //         // cout << ar[i][j] << " ";
    //     }
    //     // cout << "\n";
    // }
    for (int i = 0; i < mc; i++)
    sort(ar[i].begin(), ar[i].end());
    int s = 0;
    for (int i = 0; i < mc; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            s += (ar[i][j] * (j));
            s -= (ar[i][j] * (nc - j - 1));
        }
    }
    cout << s << "\n";
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
