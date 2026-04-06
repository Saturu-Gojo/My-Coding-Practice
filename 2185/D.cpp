#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>> v;
    

    for(int i=0; i<m; i++){
        ll b,c;
        cin>>b>>c;
        v.push_back({b,c});
    }

    int ind =-1;
    vector<ll> val(n+1,0);
    vector<ll> pos(n+1,-1);

    for(int i=0; i<m; i++){
        ll b = v[i].first;
        ll c = v[i].second;

        if(pos[b]<=ind){
            val[b]=0;
        }
        val[b]+=c;
        pos[b]=i;
        if(a[b-1]+val[b]>h){
            ind=i;
        }
    }

    for(int i=ind+1; i<m; i++){
        ll b = v[i].first;
        a[b-1]+=v[i].second;
    }




    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
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