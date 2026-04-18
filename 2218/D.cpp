#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n+1);
    a[1]=1;
    a[2]=2;
    int t =1;

    //a1 a2=a1*(a1+2) a3=(a1+2)*a1+4*a3 a1*a2*a3*a4

   
    for(int i=1; i<=n; i++){
        cout<<(t*(t+2))<<" ";
        t+=2;
    }

    
    return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}