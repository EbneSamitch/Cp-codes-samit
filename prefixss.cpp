#include<bits/stdc++.h>


using namespace std;

int main(){
int ar[100],ps[100];

for(int i=0;i<10;i++){
    cin>>ar[i];
}
ps[0]=ar[0];
for(int i=1;i<10;i++){
ps[i]=ar[i]+ps[i-1];
}

for(int i=0;i<2;i++){
    int a,b;
    cin>>a>>b;
    if(a)cout<<ps[b]-ps[a-1]<<"\n";
    else cout<<ps[b]<<"\n";
}


   return 0; 
}