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
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    if(b>a){
        cout<<"-1\n";
        return;
    }
    while (a > b && a>1)
    {
        cnt++;
        int f = a / 2;
        int c = (a + 1) / 2;
        if (f==b || c==b)
        {
            cout << cnt << "\n";
            return;
        }
        if (f % 2)
            a = f;
        else
            a = c;
    }

    if (a == b)
    {
        cout << cnt << "\n";
        return;
    }
    cout << "-1\n";
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
