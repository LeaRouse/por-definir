// IOI - EGOI - OII 2024 
// ฅ^•ﻌ•^ฅ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
int A[MAX];

void go(){
    int ans=0;
    for(int i=1;i<=999;i++){
        if(i%3==0 or i%5==0){
            ans+=i;
        }
    }
    cout<<ans<<endl;
}

int main(){
    fastio;
    go();
    return 0;
}
