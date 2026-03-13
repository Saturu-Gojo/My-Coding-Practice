#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll sum = 0;
        ll x=n;
        vector<ll> a;
        while(x>0){
            ll rem = x%10;
            a.push_back(rem);
            sum+=rem;
            x/=10;
        }
        int m = a.size();
        int d = a[m-1];
        a[m-1]=d-1;
        sort(a.begin(),a.end());
        ll ans = 0;
        while(sum>9){
            sum-=a.back();
            a.pop_back();
            ans++;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}