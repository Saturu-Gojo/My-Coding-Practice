#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll mod = 2e5+5;



void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<pair<ll,ll>> v(n+1);
    vector<ll> diff(2e5+4);
    for(int i=1; i<=n; i++){
        int p,q;
        cin>>p>>q;
        v[i]={p,q};
        diff[p]++;
        diff[q+1]--;

    } 

    vector<int> adm;
    for(int i=1;i<=mod; i++){
        diff[i]+=diff[i-1];
       
    }
    for(int i=1; i<=mod; i++){
        diff[i] = (diff[i]>=k) + diff[i-1];
    }
   


    for(int i=1; i<=q; i++){
        int u,v;
        cin>>u>>v;
        int ans = diff[v]-diff[u-1];
        
        cout<<ans<<"\n";
    }

    
    
    
    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
  
    while(t--)solve();

}