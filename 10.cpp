// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=1e6+5;
int A[MAX];
vector<int>p;
ll S[MAX];
void criba(){
    S[2]=2;
    for(int i=2;i<=1e6;i++){
        if(A[i])    continue;
        p.push_back(i);
        if(i>2){         
            S[i]=S[p[p.size()-2]]+i;
        }
        for(int j=2*i;j<=1e6;j+=i){
            A[j]=1;
        }
    }
}

void go(){
    int n;  cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int awa=upper_bound(p.begin(),p.end(),n)-p.begin();
    awa--;
    cout<<S[p[awa]]<<endl;
}

int main(){
    fastio;
    criba();
    int t;  cin>>t;
    while(t--){
        go();
    }
    return 0;
}
