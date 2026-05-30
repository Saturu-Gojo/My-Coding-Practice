#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int mini=INT_MAX,maxi=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mini = min(mini,v[i]);
        maxi = max (maxi,v[i]);
    }
    int res = (maxi-mini + 1)/2;
    
    
    cout<<res<<'\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}