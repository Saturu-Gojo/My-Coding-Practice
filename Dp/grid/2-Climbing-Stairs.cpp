#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==1)return 1;
    if(n==2)return 2;

    int ans = f(n-1)+f(n-2);
    return ans;
}

int Memoizationf(int n, vector<int> &dp){
    if(n==1)return dp[n] = 1;
    if(n==2)return dp[n]=2;
    if(dp[n]!=-1)dp[n];

    int ans = Memoizationf(n-1,dp)+Memoizationf(n-2,dp);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    cout<<f(n)<<"\n";
    cout<<Memoizationf(n,dp)<<"\n";
}