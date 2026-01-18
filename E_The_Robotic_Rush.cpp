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
    int nc, mc, k;
    cin >> nc >> mc >> k;

    vector<int> ar(nc), br(mc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    map<int, int> mp;

    for (int i = 0; i < mc; i++)
    {
        cin >> br[i];
        mp[br[i]]++;
    }
    string s;
    cin >> s;
    vector<int> cnt(nc, nc);
    int mv = 0;
    vector<int> ps(1 + k, 0), psm(k + 1, 0), psmx(k + 1, 0);
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'R')
            mv++;
        else
            mv--;
        ps[i + 1] = mv;
    }
    int psmn = 0, psmxv = 0;
    for (int i = 0; i < k; i++)
    {
        psm[i + 1] = min(psmn, ps[i + 1]);
        psmn = psm[i + 1];
        psmx[i + 1] = max(psmxv, ps[i + 1]);
        psmxv = psmx[i + 1];
    }
    sort(br.begin(), br.end());
    int cl = 0, cr = 0;
    sort(ar.begin(), ar.end());
    vector<int> mpp(k + 3, 0);
for (int in = 0; in < nc; in++)
    {
        int a = ar[in];
        int l = 1, r = k;
        int pos = -5;
        while (l <= r)
        {
            int md = (l + r)/2;
            int posm = a + psm[md];
    int posp = a + psmx[md];
            auto it = lower_bound(br.begin(), br.end(), posm);
        int ok = (it != br.end() && ((*it) <= posp));
            if (ok)
            {
                pos = md;
                r = md - 1;
            }
            else
                l = md + 1;
        }
        if (pos != -5)
            mpp[pos]++;
    }


    int alv = 0;
    for (int i = 0; i < k; i++)
    {
        alv += mpp[i+1];

        cout << nc - alv << " ";
    }
cout<<"\n";

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
