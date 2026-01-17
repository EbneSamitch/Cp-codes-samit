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

    string s;
    cin >> s;
    int k = 1;
    int cnt = 0;

    vector<int>ar(nc+1,0);
    for (int k = 1; k <= nc; k++)
    {

        for (int i = k; i <= nc; i += k)
        {
            if ( ar[i]==1)
                continue;
            if (s[i - 1] == '0')
            {
                cnt += k;
                // dbg(i);
                // dbg(k);
                // dbg(cnt);
                ar[i]=1;
            }
            else
                break;
        }
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
