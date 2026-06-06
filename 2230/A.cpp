#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;

    if(3*a<=b){
        cout<<n*a<<'\n';
        return;
    }else{
        ll r = n/3;
        n=n%3;
        ll ans = r*b;
        if(n==2){
            if(2*a<=b){
                cout<<ans+2*a<<'\n';
                return;
            }else{
                cout<<ans+b<<'\n';
            }
        }else if(n==1){
            if(a>b){
                cout<<ans+b<<'\n';
                return;
            }else{
                cout<<ans+a<<'\n';
            }
        }else{
            cout<<ans<<'\n';
        }
    }
    
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

