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

vector<pair<int, int>> samsrt(vector<pair<int, int>> ar)
{
    sort(ar.rbegin(), ar.rend());
    vector<pair<int, int>> tmp(3);
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = ar[i];
    }
    return tmp;
}

void samsolveit()
{
    int nc;
    cin >> nc;

    vector<pair<int, int>> ar(nc), br(nc), cr(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i].first;
        ar[i].second = i;
    }
    for (int i = 0; i < nc; i++)
    {
        cin >> br[i].first;
        br[i].second = i;
    }
    for (int i = 0; i < nc; i++)
    {
        cin >> cr[i].first;
        cr[i].second = i;
    }
    vector<pair<int, int>> arr(3), brr(3), crr(3);
    arr = samsrt(ar);
    brr = samsrt(br);

    crr = samsrt(cr);

    int mx = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                int a = arr[i].second;
                int b = brr[j].second;
                int c = crr[k].second;
                if (a == b || b == c || c == a)
                {
                    continue;
                }
                mx = max(mx, (arr[i].first + brr[j].first + crr[k].first));
            }
        }
    }

    cout << mx << "\n";
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
