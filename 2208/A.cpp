#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }

    bool flag = false;
    for(auto it : mp){
        if(it.second>n*(n-1)){
            flag=true;
            cout<<"NO"<<'\n';
            return;
        }
    }

    cout<<"YES"<<'\n';
    return;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}