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
    int nc, mc, h;
    cin >> nc >> mc >> h;

    vector<int> ar(nc), br(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    vector<int> chng(nc, 0), ind;

    for (int i = 0; i < mc; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        br[x] += y;
        if (chng[x]==0)
        
            chng[x] = 1,
            ind.push_back(x);
        
        if (br[x] > h){

            for (int j = 0; j < ind.size(); j++)
            {
                br[ind[j]] = ar[ind[j]];
                chng[ind[j]] = 0;
            }
            ind.clear();
        }
    }
    for (int i = 0; i < nc; i++)
    {
        cout << br[i] << " ";
    }
    cout << "\n";
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
