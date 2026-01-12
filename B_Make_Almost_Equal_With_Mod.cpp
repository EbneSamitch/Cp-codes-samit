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

// int mx = 1e6 + 2;
// vector<int> prime;

// void samprime()
// {
//     vector<int> primes(mx, 1);
//     primes[0] = primes[1] = 0;

//     for (int i = 2; i * i < mx; i++)
//     {
//         if (primes[i])
//         {
//             for (int j = i * i; j < mx; j += i)
//             {

//                 primes[j] = 0;
//             }
//         }
//     }
//     for (int i = 2; i < mx; i++)
//     {
//         if (primes[i])
//         {

//             prime.push_back(i);
//         }
//     }
// }

void samsolveit()
{
    int nc;
    cin >> nc;

    vector<int> ar(nc), e, o;
    for (int i = 0; i < nc; i++)
    {
        cin >> ar[i];
        if (ar[i] % 2)
            o.push_back(ar[i]);
        else
            e.push_back(ar[i]);
    }
    if (o.size() && e.size())
    {
        cout << "2\n";
        return;
    }
    // int m = 1e4 + 1;
    // set<int> st;
    // for (int i = 1; i < m; i++)
    // {
    //     for (int j = 0; j < nc; j++)
    //     {
    //         st.insert(ar[j] % prime[i]);
    //         if (st.size() > 2)
    //             break;
    //     }
    //     if (st.size() == 2)
    //     {
    //         cout << prime[i] << "\n";
    //         return;
    //     }
    //     st.clear();
    // }

    int a = 2;
    while (a <= 1e18)
    {
        a *= 2;
        set<int> st;
        for (int i = 0; i < nc; i++)
        {
            st.insert(ar[i] % a);
            if (st.size() > 2)
                break;
        }
        if (st.size() == 2)
        {
            cout << a << "\n";
            return;
        }
        st.clear();
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

    // samprime();
    int tc;
    cin >> tc;

    while (tc--)
    {
        samsolveit();
    }

    return 0;
}
