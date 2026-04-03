#include<bits/stdc++.h>
using namespace std;
using ll =long long;

double f(int i, vector<pair<int,int>>& v,vector<double> &dp){
    if(i==v.size())return 0;

    if(dp[i]!=-1)return dp[i];

    //skip
    double skip = f(i+1,v,dp);

    double take = v[i].first + (1.0 - double(v[i].second)/100.0) * f(i+1,v,dp);
    return dp[i] = max(skip,take);
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    vector<double> dp(n+1,-1);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    } 
    cout<<fixed<<setprecision(10)<<f(0,v,dp)<<endl;

    
}




int main(){
    int t;
    cin>>t;
    while(t--){
        solve();


    }
}