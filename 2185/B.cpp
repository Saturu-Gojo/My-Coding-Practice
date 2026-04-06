#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int maxi = 0;

    for(int i=0; i<n; i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
       

    }
    cout<<maxi*n;
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