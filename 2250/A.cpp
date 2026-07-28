#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i = 1; i <=n; i++) cin >> a[i];

    if(n % 2 != 0){
        cout << "NO\n";
        return;
    }

    ll mini = INT_MAX;
    ll maxi=0;
    for(int i=1;i<=n; i++){
        if(i&1)mini = min(a[i],mini);
        else{
            maxi = max(a[i],maxi);
        }
    }
    if(maxi<mini){
        if(mini-maxi>=2){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        cout<<"NO"<<"\n";
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}