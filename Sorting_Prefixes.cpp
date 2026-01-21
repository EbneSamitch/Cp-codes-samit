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

    vector<int> ar(nc), cr(nc);
    int in = 0;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        cr[i] = ar[i];
        if (ar[i] == 1)
        {
            in = i;
        }
    }
    int cst = 0;
    sort(cr.begin(), cr.end());
    if(cr==ar){
        cout<<0<<"\n";
        return;
    }   
    int c = 0;
    for (int i = 0; i < nc; i++)
    {
        if (ar[i] != cr[i])
        {
            c = ar[i];
        }
    }
    cst += c;
    cout << cst << "\n";
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
