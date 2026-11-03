#include <bits/stdc++.h>
using ll = long long;
using namespace std;



void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    sort(v.begin(),v.end());
    int ans = 1;
    ll lo = 1;
    int ind = (n-1)/2;
    ll hn = 2e9+1;
    while(lo<=hn){
        ll mid = lo + (hn-lo)/2;
        ll op=0;
        for(int i=ind; i<n; i++){
            op+=max(0*(1LL),mid-v[i]);
        }
        if(op<=k){
            ans=mid;
            lo=mid+1;
        }else{
            hn = mid-1;
        }
    }
    cout<<ans<<'\n';
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    // for(int i=1; i<=1e5; i++){
    //     for(int j=i; j<=1e5; j+=i){
    //         fac[j].push_back(i);
    //     }
    // }

	int t=1;
    // cin>>t;
  
    while(t--)solve();

}