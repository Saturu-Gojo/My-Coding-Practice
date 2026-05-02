#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
    int n;
    cin>>n;
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    int mex = 0;
    while(!ms.empty()){
        auto it = ms.find(mex);
        if(it!=ms.end()){
            ms.erase(it);
            mex++;
        }else{
            it = ms.lower_bound(2*mex+1);
            if(it!=ms.end()){
                ms.erase(it);
                mex++;
            }else{
                break;
            }
        }
        cout<<mex<<'\n';
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}