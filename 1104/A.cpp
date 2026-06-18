#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    ll sum = 0;
    int mini = INT_MAX;
    vector<int> v(n),diff;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mini = min(mini,v[i]);
        sum+=min(v[i],mini);
    }
    int maxi = 0;
    for(int i=1; i<n; i++){
        int dif = v[i]-v[i-1];
        maxi = max(maxi,dif);
       
    }
    cout<<sum;
   
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}