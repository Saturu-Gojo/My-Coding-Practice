#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool is_true(int i, int j, string s, vector<vector<ll>> &dp){
    if(i>=j)return true;
    if(dp[i][j]!=-1)return dp[i][j];

    if(s[i]==s[j])return dp[i][j] = is_true(i+1,j-1,s,dp);
    else return dp[i][j] = false;
}




void solve(){
    int n,m;
    cin>>n>>m;

    
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
      
    }

    ll maxi = 0;
    for(int i=0; i<n; i++){
        maxi = max(v[i],maxi-m);
        v[i]=maxi;
    }

    maxi = 0;
    for(int i=n-1; i>=0; i--){
        maxi = max(v[i],maxi-m);
        v[i]=maxi;
    }

    for(int i=0; i<n; i++)cout<<v[i]<<" ";

    cout<<"\n";

    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
  
    while(t--)solve();

}