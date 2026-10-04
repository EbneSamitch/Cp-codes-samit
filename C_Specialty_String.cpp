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
    int nc;
    cin >> nc;

    string s;
    cin >> s;

    for (int i = 0; i < nc - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i]!='5')
        {
            s[i] = '5';
            s[i + 1] = '5';
            dbg(i);
            dbg(i+1);

            int l = i, r = i + 1;
            while (l >= 0 && r <= nc - 1)
            {
                if (s[l] == '5')
                    l--;
                else if (s[r] == '5')
                    r++;
                else if (s[l] == '5' && s[r] == '5')
                    l--, r++;
                else  if (s[l] == s[r])
                    {
                        s[l] = s[r] = '5';
                        l--;r++;
                    }
                    else {
                    break;
                    }
                    dbg(l);
                    dbg(r);
                    
                }
        }
    }
    int c = 0;
    for (int i = 0; i < nc; i++)
    {
        if (s[i] != '5'){
            
            c = 1;
            break;
        }
    }
    if (c)
        NO;
    else
        YES;
}

/*
Ebnesamit
*/
int32_t main()
{
    opscode();

    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    int tc;
    cin >> tc;

    while (tc--)
    {
        dbg(tc);
        samsolveit();
    }

    return 0;
}
