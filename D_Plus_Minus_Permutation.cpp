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
    int nc,x,y;
    cin>>nc>>x>>y;
    if(x==y){
        cout<<"0\n";
        return;
    }
    int cmn=(x*y)/(gcd(x,y));
    cmn=nc/cmn;
    int a=nc/x;
    int b=nc/y;
    int at=nc*(nc+1)/2;
    a-=cmn;
    int rm=nc-a;
    rm=rm*(rm+1)/2;
    at-=rm;
    b-=cmn;
    int bt=b*(b+1)/2;
    cout<<at-bt<<"\n";
       
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
