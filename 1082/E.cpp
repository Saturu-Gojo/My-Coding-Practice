#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, c;
    cin>>n>>c;
    vector<int> v(n);
    
    
    for(int i=0; i<n; i++){
        cin>>v[i];
        
    }
    vector<int> dp(1e6,0);
    int maxi = 0;
    int num = 0;
    for(int i=0; i<n; i++){
        if(v[i]==c){
            num++;
            
        }else{
            dp[v[i]] = max(num,dp[v[i]])+1;
        }
        maxi = max(maxi,dp[v[i]]-num);
    }

    cout<<maxi+num<<"\n";

    return 0;
}