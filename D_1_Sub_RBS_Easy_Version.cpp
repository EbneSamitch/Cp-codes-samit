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

    string s = "0";
    string t;
    cin >> t;
    s += t;
    s += "0";
    vector<int> psa(nc + 2, 0), ssa(nc + 2, 0), psb(nc + 2, 0), ssb(nc + 2, 0);
    for (int i = 1; i <= nc; i++)
    {
        if (s[i] == '(')
            psb[i] = psb[i - 1]+1;
        else
            psb[i] = psb[i - 1];
            // dbg(psb[i]);

    }
    for (int i = nc; i >= 0; i--)
    {
        if (s[i] == ')')
            ssb[i] = ssb[i + 1]+1;
        else
            ssb[i] = ssb[i + 1];
            dbg(i);
            dbg(ssb[i]);
    }
    int mx = 0;
    int f=0;
    for (int i = 1; i <= nc; i++)
    {
        if (s[i] == ')')
        {
            f=1;
            dbg(i);
            if (ssb[i+1] >= i)
            {
                dbg(ssb[i+1]);
                mx = i;
                int a = psb[nc] - psb[i];
                int b = ssb[i +1] - i;
                b = max(0ll, b);
                mx += min(a, b);
            }
            else
                break;
        }
        if(f)   break;
    }
    if (!mx)
    {
        cout << "-1\n";
        return;
    }
    cout << mx * 2 << "\n";
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
