// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
int A[MAX];

void go(){
    int n;  cin>>n;
    n--;
    int maxi_3=n-(n%3); maxi_3/=3;
    int maxi_5=n-(n%5); maxi_5/=5;
    int maxi_15=n-(n%15);   maxi_15/=15;
    
    ll suma_3=3LL*(maxi_3+1)*maxi_3/2;
    ll suma_5=5LL*(maxi_5+1)*maxi_5/2;
    ll suma_15=15LL*(maxi_15+1)*maxi_15/2;
    
    cout<<suma_3+suma_5-suma_15<<endl;
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--)
        go();
    return 0;
}
