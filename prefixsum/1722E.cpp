#include <bits/stdc++.h>
using ll = long long;
using namespace std;


void solve(){
    int n,q;
    cin>>n>>q;

    vector<vector<ll>> prefix(1000+1,vector<ll>(1000+1,0));
    for(int i=0; i<n; i++){
        ll p,q;
        cin>>p>>q;
        prefix[p][q]+= 1LL*p*q;
    }

    

    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            prefix[i][j] += prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
        }
    }

    for(int i=0; i<q; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        ll ans = prefix[c-1][d-1] - prefix[a][d-1]-prefix[c-1][b] + prefix[a][b];
        cout<<ans<<"\n";
    }
    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
    cin>>t;
    while(t--)solve();

}