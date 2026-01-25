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

    vector<int> ar(nc), br(nc), cr(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
        cr[i] = ar[i];
    }
    sort(ar.rbegin(), ar.rend());
    int in = -1;
    for (int i = 0; i < nc; i++)
    {
        if (ar[i] != br[i])
        {
            in = i;
            break;
        }
    }
    int lst = -1;
    if (in != -1)
    {

        for (int i = in + 1; i < nc; i++)
        {
            if (br[i] == nc - in)
            {
                lst = i;
                break;
            }
        }
    }
    dbg(in);
    dbg(lst);
    if (in == -1 && lst == -1)
    {
        for (int i = 0; i < nc; i++)
        {
            cout << br[i] << " ";
        }
        cout << "\n";
        return;
    }
    reverse(cr.begin() + in, cr.begin() + lst + 1);
    // for (int i = in; i <= lst; i++)
    // {
    //     cr[nc - i] = br[i];
    //     dbg(cr[nc - i]);
    // }
    for (int i = 0; i < nc; i++)
    {
        cout << cr[i] << " ";
    }
    cout << "\n";
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
