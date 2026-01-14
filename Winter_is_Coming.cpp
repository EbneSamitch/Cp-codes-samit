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
    int nc, a, b;

    cin >> nc >> a >> b;

    vector<int> ar(nc);
    int c = 0;
    int f = 0;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        if (ar[i] < a && !f)
        {
            c++;
            f = 1;
        }
        else if (ar[i] >= a && ar[i] <= b && f)
            continue;

        
      else   if (ar[i] > b && f)
            f = 0;
    }
    cout << c << "\n";
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
