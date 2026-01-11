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

    vector<int> ar(nc), br(nc, 0);
    map<int, int> mp;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    int l = 0, r = nc - 1;

    int f = 0;
    int a = 0, b = 0;
    for (int i = 0; i < nc; i++)
    {
        if (ar[i] != ar[nc - 1 - i])
        {
            a = ar[i], b = ar[nc - 1 - i];
            break;
        }
    }
    while (l < r)
    {
        while (ar[l] == a)
            l++;
        while (ar[r] == a)
            r--;
        if (l >= r)
            break;
        if (ar[l] != ar[r])
        {
            f = 1;
            break;
        }
        l++;
        r--;
    }
    if (!f)
    {
        YES;
        return;
    }
    f = 0, l = 0, r = nc - 1;
    while (l < r)
    {
        while (ar[l] == b)
            l++;
        while (ar[r] == b)
            r--;
        if (l >= r)
            break;
        if (ar[l] != ar[r])
        {
            f = 1;
            break;
        }
        l++;
        r--;
    }
    if (!f)
    {
        YES;
        return;
    }
    NO;
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
