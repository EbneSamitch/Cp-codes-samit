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

    vector<int> ar(nc+2);
    for (int i = 1; i <= nc; i++)
    {
        cin >> ar[i];
    }
       
    int cnt = 0;
    for(int i = 1; i < nc; i++){
        if(i+2 <= nc && ar[i]+ar[i+1] == 7 || ar[i] == ar[i+1]) {
            if(ar[i+1] + ar[i+2] == 7 || ar[i+1] == ar[i+2]){
                cnt++;
                i++;
            }
            else cnt++;
        }
        else if(ar[i]+ar[i+1] == 7 || ar[i] == ar[i+1]) cnt++;
 
    }
    cout << cnt << '\n';

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
