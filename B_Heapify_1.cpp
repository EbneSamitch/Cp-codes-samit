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

    vector<int> ar(nc + 1, 0), br(nc + 1, 0);
    for (int i = 1; i <= nc; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    sort(br.begin(), br.end());
      if (ar == br)
        {
            YES;
            return;
        }
    int a = (nc+1)/2;

    for (int i = 1; i <=a; i++)
    {
        if ((i * 2 <= nc) && (ar[i] > ar[i * 2]))
        {
            int tmp = ar[i];
            ar[i] = ar[i * 2];
            ar[i * 2] = tmp;
        }
    }
    // for (auto &i : ar)
    //     cout << i << " ";
    //     cout << "\n";
    //         for (auto &i : br)
    //     cout << i << " ";
    if (ar == br)
        YES;
    else
        NO;
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
