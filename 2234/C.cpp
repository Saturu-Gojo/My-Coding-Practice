#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> h(n),w;
    ll maxi = 0;
    for(int i=0; i<n; i++){
        cin>>h[i];
        maxi+=h[i];
    }

    ll sum = 0;
    for(int i=0; i<n; i++){
       
  
        ll maxi1 = 0;
        vector<ll> mx1(n, 0);
        for(int j=1; j<n; j++){
            int ind = (i+j)%n;
         
            ll prev = h[(i+j-1)%n];
     
           
            maxi1 = max(maxi1,prev);
            mx1[ind]=maxi1;
        }
        // w.push_back(vol);
        vector<ll> mx2(n, 0);
        ll maxi2 = 0;
       
        for(int j=1; j<n; j++){
            int ind = (i-j+n)%n;
            // ll neigh = h[(ind-1+n)%n];

            maxi2 = max(maxi2,h[ind]);
            mx2[ind]=maxi2;
        }
        ll vol=0;

        for(int j=0; j<n; j++){
            if(i!=j)vol+=min(mx1[j],mx2[j]);
        }
        cout<<vol<<" ";
        
    }

    cout<<'\n';
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

