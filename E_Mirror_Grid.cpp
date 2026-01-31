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

    vector<vector<char>> ar(nc, vector<char>(nc));
    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cin >> ar[i][j];
        }
    }



    int cnt = 0;
    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            int c0 = 0, c1 = 0;


				if (ar[i][j] == '0')
					c0++;
				else
					c1++;

				if (ar[j][nc - i - 1] == '0')
					c0++;
				else
					c1++;

				if (ar[nc - i - 1][nc - j - 1] == '0')
					c0++;
				else
					c1++;

				if (ar[nc - j - 1][i] == '0')
					c0++;
				else
					c1++;


				if ((c0 == 0) ||(c1 == 0))
					continue;


				if (c0 >= c1)
				{
					cnt += c1;
					ar[i][j] = '0';
					ar[j][nc - i - 1] = '0';
					ar[nc - i - 1][nc - j - 1] = '0';
					ar[nc - j - 1][i] = '0';
				}
				else
				{

					cnt += c0;
					ar[i][j] = '1';
					ar[j][nc - i - 1] = '1';
					ar[nc - i - 1][nc - j - 1] = '1';
					ar[nc - j - 1][i] = '1';
				}

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
