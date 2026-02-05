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
    int a, b, c;
cin >> a >> b >> c;
        int ans = 0;
        for (int i = 0; i < (1 << 7); i++) {
            int x = 0, y = 0, z = 0;
            for (int j = 1; j <= 7; j++) {
                if (i >> (j - 1) & 1) {
                    x += (j & 1);
                    y += (j >> 1) & 1;
                    z += (j >> 2) &1;
                }
            }
            if (x <= a && y <= b && z <= c)
                ans = max(ans, (int)__builtin_popcountll((int)i));
        
        }
    cout << ans << "\n";
    
       
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
