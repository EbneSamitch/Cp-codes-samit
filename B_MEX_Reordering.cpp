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

    vector<int> ar(nc);
    int z=0;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        if(!ar[i])z++;
    }
    if(z==0 || z==nc){
NO;
        return;
    }
       sort(ar.begin(),ar.end());
       

       int mx=0;
       for(int i=1;i<nc;i++){
        if(ar[i]==mx){
            mx++;
        
        }else break;
       }
       if(mx==1){
        NO;
       }else YES;
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
