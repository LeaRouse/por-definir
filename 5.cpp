// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
int A[MAX];
int p[]={2,3,5,7,9,11,13,17,19,23,29,31,37};

void go(){
    int n;    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=0;j<13;j++){
            int cont=0;
            while(a%p[j]==0){
                cont++;
                a/=p[j];
            }
            A[p[j]]=max(A[p[j]],cont);
        }
    }
    ll ans=1;
    for(int i=0;i<13;i++){
        for(int j=0;j<A[p[i]];j++){
            ans*=p[i];
        }
    }
    cout<<ans<<endl;
    for(int j=0;j<13;j++){
        A[p[j]]=0;
    }
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
         go();
    }
    return 0;
}
