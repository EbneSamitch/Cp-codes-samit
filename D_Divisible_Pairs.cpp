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
    int nc, x, y;
    cin >> nc >> x >> y;

    map<pair<int, int>, int> mp;
    int cnt = 0;
    vector<int> ar(nc);
    for (int i = 0; i < nc; i++)
    {

        cin >> ar[i];
        int a = ar[i] % x, b = ar[i] % y;

        int aa, bb;
        aa=x-a;

        aa %= x;

        bb = b;


        cnt += mp[{aa, bb}];
        mp[{a, b}]++;
    }
    cout << cnt << "\n";
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
