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
    int o=-1,z=nc+1;
    int f=0;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        if(!ar[i])f=1;
        
    }
        for (int i = 0; i < nc; i++)
    {
if(ar[i]==0){
    o=i;
    break;
        
    }
}
for(int i=nc-1;i>=0;i--){
    if(ar[i]==0){
        z=i;
        break;
    }


}
if(!f){
    cout<<"Alice\n";
    return;
}
if(o==0 && z==nc-1){
 cout<<"Bob\n";
    return;
}
cout<<"Alice\n";
   
       
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
