#include<bits/stdc++.h>
using namespace std;
using ll = long long;



void solve(){
    ll x, y;
    cin>>x>>y;

    if(x==1 && y==2){
        cout<<"NO"<<'\n';
    }else if(x*2<y){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    

    
    return;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}