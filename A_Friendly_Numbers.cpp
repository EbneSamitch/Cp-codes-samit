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
    string s;
    cin >> s;
    int nc = s.size();
    int n = stoll(s);
    int mx = 9 * nc;
    int cnt = 0;
    map<int,int>mp;
    for (int i = 0; i <= mx+1; i++)
    {
        string p = to_string(i + n);
        int nn = stoll(p);
        for(int j=0;j<p.size();j++){
            mp[nn]+=(p[j]-'0');
        }
       
    }
    for(auto &i:mp){
        if(i.first-n==i.second){
            cnt++;
        }
    }
        
    
    cout << cnt << "\n";
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
