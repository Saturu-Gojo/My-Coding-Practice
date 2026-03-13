#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> coins = {100, 20, 10, 5, 1};

    vector<ll> dp(n + 1, LLONG_MAX);
    dp[0] = 0;

    for(int i=0; i<=n; i++){
        for(ll c : coins){
            if(i>=c){
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    cout << dp[n] << "\n";
}