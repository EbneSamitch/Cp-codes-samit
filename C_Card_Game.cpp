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
    if (s[0] == s[nc - 1] || nc == 2)
    {
        if (s[0] == 'A')
        {
            cout << "Alice\n";
        }
        else
            cout << "Bob\n";
        return;
    }

    int ca = 0, cb = 0;

    for (int i = 0; i < nc; i++)
    {
        if (s[i] == 'A')
            ca++;
        else
            cb++;
    }
            if (ca == 1)
        {
            cout << "Bob\n";
            return;
        }
         if (cb == 1)
        {
            cout << "Alice\n";
            return;
        }
    if (s[0] == 'A' && s[nc - 1] == 'B')
    {
      
            cout << "Bob\n";
    }
    else if (s[0] == 'B' && s[nc - 1] == 'A')
    {

        
            for (int i = 1; i < nc - 1; i++)
            {
                if (s[i] == 'A')
                    ca = i;
                else
                    cb = i;
            }
            if (ca > cb)
            {
                cout << "Alice\n";
            }
            else
                cout << "Bob\n";
        
    }
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
