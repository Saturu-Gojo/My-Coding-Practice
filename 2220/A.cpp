#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> div(ll n){
    vector<ll> divi;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            divi.push_back(i);
        }
    }
    return divi;
}


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    sort(v.rbegin(), v.rend());
    for(int i=0; i<n-1; i++){
        if(v[i]==v[i+1]){
            cout<<-1<<'\n';
            return;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';

    
    return;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}