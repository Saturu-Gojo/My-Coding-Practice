#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1e9);
    dp[0] = 0;
    vector<int> arr = {a,b,c};

   

    
    for(int i = 1; i <= n; i++){

        for(int x:arr)
            if(i-x>=0)
                dp[i] = max(dp[i],dp[i-x]+1);
            
        }
    cout<<dp[n]<<endl;
    return 0;
}

