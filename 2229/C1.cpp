#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<int> ind;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int cnt=0;
    if(a[0]<0)cnt++;

    for(int i=1; i<n; i++){
        if(a[i]<0)cnt++;
        if((a[i-1]<0 && a[i]>0) || (a[i-1]>0 && a[i]<0)){
            ind.push_back(i);
        }
    }
    if(a[n-1]>0)ind.push_back(n);
    if(cnt==n){
        cout<<0<<'\n';
        return;
    }
    vector<int> ans;
    for(int i=ind.size()-1; i>=0; i--){
        a[0]=-a[0];
        ans.push_back(ind[i]);
    }
    if(a[0]>0){
        ans.push_back(ans[0]);
    }
    cout<<ans.size()<<'\n';
    for(int i=0; i<ans.size(); i++ ){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';    
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