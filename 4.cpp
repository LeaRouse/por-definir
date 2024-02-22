// IOI - EGOI - OII 2024 
// ฅ^•ﻌ•^ฅ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
ll A[MAX];

bool pali(int x){
    string s=to_string(x);
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}

void go(){
    int ans=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            int awa=i*j;
            if(pali(awa)){
                ans=max(ans,awa);
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    fastio;
    go();
    return 0;
}
