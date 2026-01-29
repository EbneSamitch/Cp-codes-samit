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

    vector<int> ar;
    int in = 1;
    int d = 0, ld = 0;

vector<int>br(mc);
for (int i = 0; i < mc; i++)
    {
        cin >> br[i];
    }


sort(br.begin(), br.end());

    for (int i = 0; i < mc; i++)
    {
        int x = br[i];
        if (!i)
        {
            d = x - 1;
        }
        if (i == mc - 1)
        {
            ld = nc - x;
        }

        if (i)
            ar.push_back(x - in - 1);
        in = x;
        // dbg(in);
    }
    ar.push_back(d + ld);

    sort(ar.rbegin(), ar.rend());
    int cnt = 0;
    int c = 2;


    if(nc==mc){
        cout<<nc<<"\n";
        return;
    }
    for (auto &it : ar)
    {
        int m = (c - 2) * 2;
        if (it - m == 1)
        {
            cnt++;
            break;
        }
        else if (it - m > 1)
        {
            cnt += (it - m - 1);
        }
        
        c += 2;
    }
    cout << nc - cnt << "\n";
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
