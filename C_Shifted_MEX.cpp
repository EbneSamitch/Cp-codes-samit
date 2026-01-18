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
    // int nc;
    // cin >> nc;

    // vector<int> ar(nc);
    // int mnn = 1e10;
    // int mxx = 1e-10;
    // for (int i = 0; i < nc; i++)
    // {
    //     cin >> ar[i];
    //     if (ar[i] < mnn)
    //     {
    //         mnn = ar[i];
    //     }
    // }
    // int mx = 0;
    // sort(ar.begin(), ar.end());

    // for (int i = 0; i < nc; i++)
    // {

    //     if (ar[i] > 0)
    //     {
    //         mxx = ar[i];
    //         break;
    //     }
    // }

    // for (int i = 0; i < nc; i++)
    // {
    //     if (ar[i] == mx)
    //     {
    //         mx++;
    //     }
    //     else if (ar[i] > mx)
    //     {
    //         break;
    //     }
    // }

    //     // dbg(mxx);
    //     vector<int> a = ar,b = ar;
    //     for (int i = 0; i < nc; i++)
    //     {
    //         a[i] += abs(mnn);
    //     }
    //     for (int i = 0; i < nc; i++)
    //     {
    //         b[i] -= abs(mxx);
    //     }
    //     int mx1 = 0;
    //     int mx2 = 0;
    //     for (int i = 0; i < nc; i++)
    //     {
    //         if (a[i] == mx1)
    //         {
    //             mx1++;
    //         }
    //         else if (a[i] > mx1)
    //         {
    //             break;
    //         }
    //     }

    //     for (int i = 0; i < nc; i++)
    //     {
    //         if (b[i] == mx2)
    //         {
    //             mx2++;
    //         }
    //         else if (b[i] > mx2)
    //         {
    //             break;
    //         }
    //     }
    //     cout << max({mx1, mx2,mx}) << "\n";
    
    int nc;
    cin>>nc;
    vector<int>ar(nc);
set<int>s;
    for(int i=0;i<nc;i++){
        cin>>ar[i];
        s.insert(ar[i]);
    }
int mx=0;
for(auto &ss:s){
    if(s.find(ss-1)==s.end()){

        int cnt=0;
        int c=ss;
        while(s.find(c)!=s.end()){
            cnt++;
            c++;
        }
        mx=max(mx,cnt);
    }
    
}
    
cout<<mx<<"\n";
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
