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

int nc=s.size();
int l=stoll(s);
if(nc==1){
     for(int i=2;i*i<=l;i++){
            if(l%i){
                cout<<l<<"\n";
                return;
            }
        }
}
for(int i=0;i<nc-1;i++){
    for(int j=i+1;j<nc;j++){
        string t="";
        t+=s[i];
        t+=s[j];
        int a=stoll(t);
        int f=0;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
               f=1; 
              continue;
            }
            if(f)break;
        }
        if(!f){
            cout<<a<<"\n";
            f=0;
            return;
        }
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
