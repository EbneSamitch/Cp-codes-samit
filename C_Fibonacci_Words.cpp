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
string s;
cin>>s;


    
    int f = 1;
    for(int i = 2; i < s.size(); i++){
        if((26*3 + (s[i-1]-'A') + (s[i-2]-'A'))%26 == s[i]-'A') continue;
        else f = 0;
    }
 
    if(f) YES;
    else NO;
 
       
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

    // int tc;
    // cin >> tc;

    // while (tc--)
    {
        samsolveit();
    }

    return 0;
}
