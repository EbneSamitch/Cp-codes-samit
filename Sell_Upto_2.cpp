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
    int nc;
    cin >> nc;

    vector<int> ar(nc), cr(nc);
    for(int i=0;i<nc;i++){
        cin>>ar[i];
        cr[i]=ar[i];
    }
   int br[nc+1][nc+1];
for(int i=0;i<=nc;i++){
    for(int j=0;j<=nc;j++){
        br[i][j]=-1;
    }
   }
int mx=0;
   br[0][0]=0;  
   for(int i=0;i<nc;i++){
    for(int j=0;j<=nc;j++){
        if(br[i][j]!=-1) {

            int pos=min(j+1,2ll);
            for(int k=0;k<pos+1;k++){
                br[i+1][j+1-k]=max(br[i+1][j+1-k],(br[i][j]+(k*ar[i])));
            }
        }
    }
   }

 for (int i = 0; i <=nc; i++){

 mx = max(mx, br[nc][i]);
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
