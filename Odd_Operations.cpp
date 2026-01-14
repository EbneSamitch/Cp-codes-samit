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
    int nc = s.size();
    int o = 0;
    int on = 0;
    int lst = s[nc - 1] - '0';
    if (lst % 2)
    {
        cout << "0\n";
        return;
    }
    for (int i = 0; i < nc; i++)
    {

        int a = s[i] - '0';
        if (!a)
            continue;
        // dbg(a);
        if (a % 2 && i != nc - 1)
        {
            cout << "1\n";
            return;
        }
        if (a % 2 && i == nc - 1)
        {
            cout << "0\n";
            return;
        }
    }
    int nd = s[nc - 1] - '0';
    int stp = 0;
    nd++;
    sort(s.rbegin(), s.rend());
    int sm = 0;
    for (int i = 0; i < nc; i++)
    {

        int a = s[i] - '0';
        sm += a;
        if (sm >= nd)
        {
            stp += i + 1;
            break;
        }
    }
    if (sm < nd)
    {
        cout << "-1\n";
        return;
    }
    cout << stp + 1 << "\n";
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
