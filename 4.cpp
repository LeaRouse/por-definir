// IOI - EGOI - OII 2024 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ss second
#define ff first
#define ll long long
using namespace std;
const int MAX=2e5+5;
ll A[MAX];
vector<int>v;
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
    int n;  cin>>n;
    auto it=lower_bound(v.begin(),v.end(),n);
    it--;
    cout<<*it<<endl;
}

int main(){
    fastio;
    int ans=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            int awa=i*j;
            if(pali(awa)){
                v.push_back(awa);
            }
        }
    }
    sort(v.begin(),v.end());
    int t;	cin>>t;
    while(t--){
    	go();
    }
    return 0;
}
