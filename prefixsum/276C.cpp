#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll mod = 2e5+5;



void solve(){
    int n,q;
    cin>>n>>q;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++)cin>>v[i];
    vector<int> freq(n+2);
    for(int i=0; i<q; i++){
        int p,q;
        cin>>p>>q;
        freq[p]++;
        freq[q+1]--;
    } 
    for(int i=1; i<=n+1; i++)freq[i]+=freq[i-1];

    sort(freq.begin(),freq.end());

    sort(v.begin(),v.end());

    ll ans = 0;
    for(int i=n; i>0; i--)ans+=1LL * v[i]*freq[i+1];

    cout<<ans<<"\n";

    
    
    
    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
  
    while(t--)solve();

}