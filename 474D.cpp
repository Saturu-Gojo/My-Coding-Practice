#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

int main()
{
    int t,k;
    cin>>t>>k;

    vector<ll> dp(maxi,0);
    dp[0] = 1;
    for(int i=1;i<maxi;i++){
        dp[i] = dp[i-1];
        if(i>=k) dp[i] = (dp[i] + dp[i-k]) % mod;
    }
    for(int i=1; i<maxi; i++){
        dp[i] = (dp[i] + dp[i-1]) % mod;
    }
    while(t--){

        int a,b;
        cin>>a>>b;
        cout<<(dp[b] - dp[a-1] + mod) % mod<<endl;
    }

    return 0;
}