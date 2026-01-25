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

    vector<int> ar(nc+2),nd(nc+2),xsum(nc + 2,0);
    vector<vector<int>> tr(nc + 2);
    for (int i = 0; i < nc; i++)
    {
        i++;
        cin >> ar[i];
        nd[i]=(ar[i]%2);
    }
        for (int i = 0; i < nc-1; i++)
    {
        int u,v;
        cin >> u>>v;
        tr[u].push_back(v);
        tr[v].push_back(u);
    }
    for(int i=1;i<=nc;i++){
        for(int j=0;j<tr[i].size();j++){
            int v=tr[i][j];
            xsum[i]^=nd[v];
        }
    }

       
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
