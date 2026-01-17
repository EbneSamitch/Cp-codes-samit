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
    int c = 0;
    // for (int i = 0; i < nc ; i++)
    // {

    //     if (s[i] == '1')
    //     {
    //         while (1)
    //         {
    //             int l = i;
    //             int j = i + 1;
    //             int zc = 0;
    //             if (s[j] == '1' && j < nc && j - l == 1)
    //             {
    //                 l++;
    //                 j++;
    //                 continue;
    //             }
    //             if (s[j] == '0' && j < nc)
    //             {
    //                 zc++;
    //                 j++;
    //             }
    //             else if (s[j] == '1' && j < nc && zc)
    //             {
    //                 c++;
    //                 i = j - 1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // if (c % 2 == 0)
    // {
    //     cout << "Bob\n";
    // }
    // else
    // {
    //     cout << "Alice\n";
    //     cout << c << "\n";
    //     int fst=0;
    //     for (int i = 0; i < nc - 1; i++)
    //     {

    //         if (s[i] == '1')
    //         {
    //             fst=i+1;
    //             while (1)
    //             {
    //                 int l = i;
    //                 int j = i + 1;
    //                 int zc = 0;
    //                 if (s[j] == '1' && j < nc && j - l == 1)
    //                 {
    //                     l++;
    //                     j++;
    //                     continue;
    //                 }
    //                 if (s[j] == '0' && j < nc)
    //                 {
    //                     zc++;
    //                     j++;
    //                 }
    //                 else if (s[j] == '1' && j < nc && zc)
    //                 {

    //                     i = j - 1;
    //                     cout << l + 1 << " " << j << "\n";
    //                     return;
    //                 }
    //             }
    //         }
    //     }
    //      cout << fst << " " << nc << "\n";
    // }

string tmp=s;

sort(tmp.begin(),tmp.end());
if(tmp==s){
    cout<<"Bob\n";
    return;
}
else{
    cout<<"Alice\n";

    vector<int>ans;
    for(int i=0;i<nc;i++){
        if(s[i]!=tmp[i])ans.push_back(i);
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<" ";
    }
cout<<"\n";

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
