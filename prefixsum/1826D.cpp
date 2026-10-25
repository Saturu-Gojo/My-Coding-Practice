#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n),prefix(n),suffix(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        prefix[i]=v[i]+i;
       
    }

    for(int i=n-1; i>=0; i--){
        suffix[i]=v[i]-i;
        
    }
    ll ans = 0;
    for(int i=1; i<n; i++){
        prefix[i] = max(prefix[i],prefix[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        suffix[i] = max(suffix[i],suffix[i+1]);
    }

    for(int i=1; i<n-1; i++){
        ans = max(ans, prefix[i-1]+v[i]+suffix[i+1]);
    }

    cout<<ans<<"\n";
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
    cin>>t;
    while(t--)solve();

}