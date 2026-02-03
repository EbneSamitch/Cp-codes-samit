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
    int nc, mc;
    cin >> nc >> mc;

    vector<int> ar(mc);
    for (int i = 0; i < mc; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i < mc; i++)
    {
       if (ar[i] == 1) {
            cout << 1<< "\n";
            return;
        }

    
    }

    
  
    cout << (nc - ar[mc-1] + 1) << "\n";
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
