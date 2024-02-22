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
int p[]={2,3,5,7,9,11,13,17,19};

void go(){
    for(int i=1;i<=20;i++){
        int a=i;
        for(int j=0;j<9;j++){
            int cont=0;
            while(a%p[j]==0){
                cont++;
                a/=p[j];
            }
            A[p[j]]=max(A[p[j]],cont);
        }
    }
    ll ans=1;
    for(int i=0;i<9;i++){
        for(int j=0;j<A[p[i]];j++){
            ans*=p[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
    fastio;
    go();
    return 0;
}
