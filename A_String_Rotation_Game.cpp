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
    int cnt = 1;
    char l = s[0];

    int cns = 0;

    for (int i = 1; i < nc; i++)
    {
        if (s[i] == l)
        {

            cns++;
        }
       else if (s[i] != l )
        {

            cnt++;
            l = s[i];
        }

    }
    if (cns && s[0]!=s[nc-1])
    {
        cout << cnt + 1 << "\n";
        return;
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
