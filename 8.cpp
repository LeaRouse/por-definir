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
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    ll ans=0;
    for(int i=0;i<n-k;i++){
        ll mul=1;
        for(int j=i;j<i+k;j++){
            mul*=(s[j]-'0');
        }
        ans=max(ans,mul);
    }
    cout<<ans<<endl;
}

int main(){
    fastio;
    int t;  cin>>t;
    while(t--){
        go();
    }
    return 0;
}
