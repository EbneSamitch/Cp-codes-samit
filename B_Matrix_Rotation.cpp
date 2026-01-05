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
    vector<int> ar(4),br(4);

   for(int i=0;i<4;i++){
    cin>>ar[i];
    br[i]=ar[i];
   }
   sort(br.begin(),br.end());
   if((ar[0]==br[0] && ar[3]==br[3] )|| (ar[0]==br[3] && ar[3]==br[0] )){
    YES;
   }
   else if((ar[1]==br[0] && ar[2]==br[3])|| (ar[2]==br[0] && ar[1]==br[3])){
    YES;
   }
   else NO;
   
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
