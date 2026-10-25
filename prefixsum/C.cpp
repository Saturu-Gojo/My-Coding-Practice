#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,x;
	cin >> n>>x;

	vector<ll> v(n),prefix(n+1);
    map<ll,ll> mp;
    ll ans = 0;
    mp[0]=1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        
        prefix[i+1] = prefix[i] + v[i];
        if(mp.find(prefix[i+1]-x)!=mp.end()){
            ans+=mp[prefix[i+1]-x];
            
        }
        mp[prefix[i+1]]++;
        
    }

   
    
    
    cout<<ans<<"\n";

}