#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    set<ll> s;
    ll mini=LLONG_MAX;
    ll mini0=LLONG_MAX;
    bool flag = false;
    for(int i=0; i<n; i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    int len = 0;
    for(int val:s){
        int cur = 0;
        while(s.count(val+cur)){
            cur++;
        }
        len = max(len, cur);
    }
    cout<<len;
    

    
    return;

}

// -1 0 1 2 4

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}