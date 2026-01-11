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
    int l = 1, r = nc;
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < nc; j += k)
        {
            if (i % 2)
            {
                ar[j] = r--;
            }
            else
                ar[j] = l++;
        }
    }
    for (int n = 0; n < nc; n++)
    {
        // cout<<n<<" ";
        cout << ar[n] << " ";
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
