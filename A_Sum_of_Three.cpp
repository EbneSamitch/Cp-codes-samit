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


#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
typedef long long ll;
typedef double dol;
#define pi acos(-1)
#define int long long

void samsolveit()
{
    int nc;
    cin >> nc;
    if (nc <= 6 || nc == 9) cout << "NO" << "\n";
    else if (nc % 3 == 0) {
        cout << "YES" << "\n" << 1 << " " << 4 << " " << nc - 5 << "\n";
    }
    else cout << "YES" << "\n" << 1 << " " << 2 << " " << nc - 3 << "\n";
}

/*
Ebnesamit
*/
int32_t main()
{
    opscode();

//#ifndef ONLINE_JUDGE
//    freopen("Error.txt", "w", stderr);
//#endif

    int tc;
    cin >> tc;

    while (tc--)
    {
        samsolveit();
    }

    return 0;
}
