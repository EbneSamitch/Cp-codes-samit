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

// void samsolveit()
// {
//     int nc;
//     cin >> nc;

//     vector<int> ar(nc), qr;

//     for (int i = 0; i < nc; i++)
//     {
//         cin >> ar[i];
//     }
//     if (nc == 1)
//     {
//         cout << nc << "\n";
//         return;
//     }

//     qr.push_back(ar[0]);
//     qr.push_back(ar[1]);

//     for (int i = 2; i < nc; i++)
//     {
//         int cz = qr.size();
//         int ar = qr[cz - 2] - qr[cz - 1];
//         int b = qr[cz - 1] - ar[i];

//         if (ar > 0)
//         {
//             if (b > 0)
//                 qr[cz - 1] = ar[i];
//             else if (b < 0)
//                 qr.push_back(ar[i]);
//         }
//         else 
//         {
//             if (b < 0)
//                 qr[cz - 1] = ar[i];
//             else if (b > 0)
//                 qr.push_back(ar[i]);
//         }
//     }

//     int c = qr.size();
//     if (qr[0] == qr[1])
//         c--;
//     cout << c << "\n";
// }



//easy soln
void samsolveit(){
    int nc;
    cin>>nc;

    vector<int> ar(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
    }
    nc = unique(ar.begin(), ar.end()) - ar.begin();

    int ans = nc;
    for (int i = 0; i + 2 < nc; i++) {
      ans -= (ar[i] < ar[i + 1] && ar[i + 1] < ar[i + 2]);
      ans -= (ar[i] > ar[i + 1] && ar[i + 1] > ar[i + 2]);
    }
    cout << ans << '\n';
  
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
