#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f(int i, int turn, int n, vector<int> &v,vector<vector<int>> &dp){
    if(i>=n)return 0;
    if(dp[i][turn]!=1e9)return dp[i][turn];

    //first
    int one = 1e9;
    int two = 1e9;
    if(turn==1){
        one = (v[i]==1?1:0) + f(i+1,2,n,v,dp);
        if(i+1<n)two = (v[i]==1?1:0) +  (v[i+1]==1?1:0) + f(i+2,2,n,v,dp);
    }else{
        one = f(i+1,1,n,v,dp);
        if(i+1<n)two = f(i+2,1,n,v,dp);
    }
    return dp[i][turn] = min(one,two);
}


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    
    for(int i=0; i<n; i++){
        cin>>v[i];
        
    }
    vector<vector<int>> dp(n+1,vector<int>(3,1e9));
    bool first = true;
    int i = 0;
    int ans = f(0,1,n,v,dp);
    cout<<ans<<"\n";
     

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