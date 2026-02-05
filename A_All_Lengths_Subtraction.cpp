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
 
        vector<int> arr(nc);
        int in = -0;
 
        for (int i = 0; i < nc; i++)
        {
            cin >> arr[i];
            if (arr[i] == nc)
            {
                in = i;
            }
        }
 
        int ok = 1;
 
        for (int i = 0; i < in; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                ok =0;
                break;
            }
        }
 
        if (ok)
        {
 
            for (int i = in; i + 1 < nc; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    ok = 0;
                    break;
                }
            }
        }
 
        if (ok)
        {
YES;
        }
        else
        {
            cout << "NO" << '\n';
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
