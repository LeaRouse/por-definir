// IOI - EGOI - OII 2024 
// ฅ^•ﻌ•^ฅ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
ll F[MAX];

void go(){
    F[1]=1;
    F[2]=2;
    ll ans=2;
    for(int i=3;i<=4e6;i++){
        F[i]=F[i-1]+F[i-2];
        if(F[i]>4e6)    break;
        if(F[i]%2==0){
            ans+=F[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
    fastio;
    go();
    return 0;
}
