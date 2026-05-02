#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mini = min(mini, 100/v[i]);
    }

    if(mini>1){
        cout<<"NO"<<'\n';
        return;
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