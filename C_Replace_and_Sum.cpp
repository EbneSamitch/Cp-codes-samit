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
    int nc,q;
    cin >> nc >> q;

    vector<int> ar(nc),br(nc),ps(nc,0);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < nc; i++)
    {
        cin >> br[i];
    }
    ar[nc-1]=max(ar[nc-1], br[nc-1]);
    for (int i = nc - 2; i >= 0; i--)
    {
        ar[i]=max({ar[i], ar[i+1],br[i]});
    }
    ps[0]=ar[0];
    for (int i = 1; i < nc; i++)
    {
        // dbg(ar[i]);
        ps[i]=ps[i-1]+ar[i];

    }

    while(q--){
        int l,r;
        cin >> l>>r;
        l--,r--;
        if(l==0){
            cout<<ps[r]<<" ";
        }else{
            cout<<ps[r]-ps[l-1]<<" ";
        }   
    }
    cout<<"\n";
       
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
