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
    int nc,k,a,b;
    cin >> nc>>k>>a>>b;

    vector<int> x(nc),y(nc);
    for (int i = 0; i < nc; i++)
    {
        cin >> x[i]>>y[i];
    }
    int ab=abs(x[a-1]-x[b-1])+abs(y[a-1]-y[b-1]);
       int ma=1e18,mb=1e18;
for(int i=0;i<k;i++){
ma=min(abs(x[i]-x[a-1])+abs(y[i]-y[a-1]),ma) ;
mb=min(abs(x[i]-x[b-1])+abs(y[i]-y[b-1]),mb);
}
ab=min(ab,ma+mb);
cout<<ab<<"\n";


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
