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
int l,w,r,g,b;
cin>>l>>w>>r>>g>>b;

int pr=2*(l+w);
int lw=l+w;
int mx=max({r,g,b});
int mn=min({r,g,b});
int md=0;
if(mx==r){
    if(mn==g){
        md=b;
    }else md=g;
}else if(mx==g){
        if(mn==r){
        md=b;
    }else md=r;
}else {        if(mn==r){
        md=g;
    }else md=r;

}
r=mx;
g=md;
b=mn;
mx=l+w+l;
md=l+w+w;
int cnt=4;
int tl=pr;
if(r>=w && r>=l){
if(r>=lw){
    if(r>=m)
}

}
       
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
