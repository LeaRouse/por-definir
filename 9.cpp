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
    if(A[n]==0){
        cout<<-1<<endl;
    }
    else{
        cout<<A[n]<<endl;
    }
}

int main(){
    fastio;
    for(int i=1;i<3e3;i++){
        for(int j=i+1;j<3e3;j++){
            int k=i*i+j*j;
            int c=sqrt(k);
            if(c*c==k){
                A[i+j+c]=max(A[i+j+c],i*j*c);
            }
        }
    }
    int t;  cin>>t;
    while(t--){
        go();
    }
    return 0;
}
