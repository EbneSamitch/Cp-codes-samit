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

struct friends
{
int diff,a,b;
};


auto samcmp(friends &f1, friends &f2){
    return f1.diff < f2.diff;
}
void samsolveit()
{
    int nc;
    cin >> nc;

    vector<int> ar(nc), br(nc);
    vector<friends> frs(nc);
    vector<pair<int,int>> di(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < nc; i++)
    {
        cin >> br[i];
    }
    for (int i = 0; i < nc; i++)
    {
        frs[i].diff =(br[i] - ar[i]);
        frs[i].a = ar[i];
        frs[i].b = br[i];

    }
    sort(frs.begin(), frs.end(), samcmp);
    multiset<int>ms1;
    for (int i = 0; i < nc; i++)
    {
ms1.insert(frs[i].diff);
// cout<<frs[i].diff<<" ";
    }
    // cout<<"\n";
    int cnt=0;
    while(ms1.size()>1){
        int v1=*ms1.begin();
        dbg(v1);
        int v2=-v1;
        dbg(v2);
        ms1.erase(ms1.begin());
        auto it=ms1.lower_bound(v2);
        if(it!=ms1.end()){
            cnt++;
            ms1.erase(it);
        }
    }

    cout<<cnt<<"\n";
}

/*
Ebnesamit
*/
int32_t main()
{
    opscode();

    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    int tc;
    cin >> tc;

    while (tc--)
    {
        samsolveit();
    }

    return 0;
}
