#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n+1), odd, even;
    ll od=0,e=0;
    ll se=0, so=0;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(i%2!=0){
            odd.push_back(a[i]);
            so+=a[i];

        }else{
            even.push_back(a[i]);
            se+=a[i];
        }
    }

    for(int i=1; i<=m; i++){
        ll x; 
        cin>>x;
        if(x%2!=0)od++;
        else e++;
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    ll marke = 0;

    if(e>0 && !even.empty()){
        int q = even.size();
        marke+=even[q-1];
        int lt = min(q,(int)e);
        for(int i=q-2; i>=q-lt; i--){
            if(even[i]>0)marke+=even[i];

        }
    }
    ll marko = 0;

    if(od>0 && !odd.empty()){
        int q = odd.size();
        marko+=odd[q-1];
        int lt = min(q,(int)od);
        for(int i=q-2; i>=q-lt; i--){
            if(odd[i]>0)marko+=odd[i];

        }
    }

    ll ans = (so-marko) + (se-marke);
    cout<<ans<<'\n';



    
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}