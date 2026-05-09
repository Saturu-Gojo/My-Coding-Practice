#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n),ans,vis(n+1);
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(mp.find(v[i])==mp.end()){
            ans.push_back(v[i]);
        }
        mp[v[i]]++;
        
    }

    for(int i=0; i<n; i++){
        if(mp.find(i+1)==mp.end()){
            ans.push_back(i+1);
        }
        
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";

    }
    cout<<'\n';
    return;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}