#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    vector<int> dp(n,0);
    
    dp[0] = 1;
    
    int len = 1;

    for(int i=1; i<n; i++){
        if(x[i]>x[i-1]){
            len++;
        }
        else{
            len = 1;
        }
        // cout<<len<<" ";
        dp[i] = max(dp[i-1], len);
    }
    cout << dp[n-1] << endl;

    return 0;
}