// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
int A[MAX];
vector<int>p;
void criba(){
    for(int i=2;i<2e5;i++){
        if(A[i])    continue;
        p.push_back(i);
        for(int j=i*2;j<2e5;j+=i){
            A[j]=1;
        }
    }
}

void go(){
    int n;  cin>>n; 
    n--;
    cout<<p[n]<<endl;
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
