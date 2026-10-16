#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

int f(int i,int op,vector<int> vis, vector<int> &a, vector<int> &b, int k, int n,int maxi,vector<vector<int>> &dp){
    if(i==n)return (op)*maxi;
    if(op==0)return 0;
    if(dp[i][op]!=-1)return dp[i][op];
    
    maxi =max(maxi,b[i]);
    // move to next level
    vector<int> copy = vis;
    int next = 0;
    int stop = 0;
    if(vis[i]==0){
        vis[i]=1;
        next = a[i] + f(i+1,op-1,vis,a,b,k,n,maxi,dp);
        stop = a[i] + f(i,op-1,vis,a,b,k,n,maxi,dp);
    }else{
        next = b[i] + f(i+1,op-1,vis,a,b,k,n,maxi,dp);
        stop = b[i] + f(i,op-1,vis,a,b,k,n,maxi,dp);
    }
    
    return dp[i][op] = max(next,stop);
}


void solve()
{
    int n, k;
    cin>>n>>k;
    vector<ll> a(n),b(n),vis(n);
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    ll maxi = 0;
    int sum = 0;
    ll score = 0;
    for(int i=0; i<min(n,k); i++){
        sum+=a[i];
        maxi=max(maxi,b[i]);
        ll curr = sum + (k-i-1)*maxi;
        score = max(score,curr);
        
    }
    cout<<score<<"\n";
    
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}