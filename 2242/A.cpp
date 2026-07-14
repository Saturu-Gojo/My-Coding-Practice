#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;
    vector<ll> b(n);
    bool flag = false;
    int cnt=0;

    for(int i=0; i<n; i++){
        cin>>b[i];
        if(b[i]>=3){
            flag=true;
        }else if(b[i]==2)cnt++;
    } 
    if(flag || cnt>=2){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

    
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}