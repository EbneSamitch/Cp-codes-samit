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
    int nc, k;
    cin >> nc >> k;

    vector<int> ar(nc);
    set<int> st;
    for (int i = 0; i < nc; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    //    sort(ar.begin(),ar.end());
    int c = 0;
    if(st.size()==1){
        if(*st.begin()==0){
            cout<<"1\n";
        }else cout<<0<<"\n";
        return;
    }
    for (auto &a : st)
    {
        c++;
        if (c == k - 1)
        {
            cout << a + 1 << "\n";
            return;
        }
    }
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
