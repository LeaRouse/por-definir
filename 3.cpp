// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
ll A[MAX];

void go(){
    ll n;   cin>>n;
    ll prime=0;
    for(int i=2;1LL*i*i<=n;i++){
        while(n%i==0){
            n/=i;
            prime=i;
        }
    }
    if(n!=1){
        prime=n;
    }
    cout<<prime<<endl;
}

int main(){
    fastio;
    int t;  cin>>t;
    while(t--)
        go();
    return 0;
}
