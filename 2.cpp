// IOI - EGOI - OII 2024 
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ss second
using namespace std;
const int MAX=300;
ll F[MAX];
ll S[MAX];
vector<pair<ll,int>>v;

void go(){
    ll n;  cin>>n;
    pair<ll,int>p={n,0};
    auto it=upper_bound(v.begin(),v.end(),p)-v.begin();
    it--;
    cout<<S[v[it].ss]<<endl;
}

int main(){
    fastio;
    F[1]=1;    F[2]=2;
    S[2]=2;
    for(int i=2;i<5*16*3;i++){
        F[i]=F[i-1]+F[i-2];
        S[i]=S[i-1];
        if(F[i]%2==0){
            v.push_back({F[i],i});
            S[i]+=F[i];
        }
        if(F[i]>4e16){
            break;
        }
    }
    int t;  cin>>t;
    while(t--){
        go();
    }
    return 0;
}
