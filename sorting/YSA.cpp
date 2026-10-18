#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    int q;
    cin>>q;
    map<ll,ll> mp;
    for(int i=0; i<q; i++){
        ll f, k;
        cin>>f>>k;
        if(f==0){
            ll n;
            cin>>n;
            mp[k]=n;
        }else{
            cout<<mp[k]<<endl;
        }
    }
    
    

    
}




int main(){
    
    solve();
    
    
    return 0;
}

