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

#define MX 1e18+5


void samsolveit()
{
    int nc;
    cin >> nc;

    vector<int> ar(nc), br(nc+2, 0), div(nc + 2, MX);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < nc; i++)
    {
        br[ar[i]]++;
    }
    div[1] = 0;
    vector<vector<int>> mul(nc + 2);
    for (int i = 1; i < nc + 1; i++)
    {
        if (br[i] == 0)
        {
            continue;
        }
        for (int j = i; j < nc + 1; j += i)
        {
            mul[j].push_back(i);
        }
    }
    for (int i = 1; i < nc + 1; i++)
    {
        for (int j = 0; j < mul[i].size(); j++)
        {

            int val = mul[i][j];
            if (val > 1)
            {

                if (div[i / val] < MX)
                {
                    div[i] = min(div[i], (div[i / val] + 1));
                   
                
            }
        }
    }
}
    for (int i = 1; i < nc + 1; i++)
    {
        int cnt = -1;
        if (i > 1)
        {
            if (div[i] < MX)
            cnt = div[i];
        }
        else
        {
            if (br[1] >=1)
                cnt+=2;
        }
        cout << cnt << " ";
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
