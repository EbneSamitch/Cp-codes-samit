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
    string s;
    cin >> s;
    int cnt = 1;
    int nc = s.size();
    for (int i = 1; i < nc; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            if (cnt == 1)
            {
                cout << "NO\n";
                return;
            }
            cnt = 1;
        }
    }
    if (cnt == 1)
    {
        NO;
        return;
    }
    YES;
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
