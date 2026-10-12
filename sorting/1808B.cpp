#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(m,vector<int>(n,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        cin>>v[j][i];
    }
    ll win = 0;
    for(int i=0; i<m; i++){
        sort(v[i].begin(),v[i].end());
        for(int j=0; j<n; j++){
            win+=(ll)(j)*v[i][j] - (ll)(n-1-j)*v[i][j];
        }
    }
    cout<<win<<"\n";
}




int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}

