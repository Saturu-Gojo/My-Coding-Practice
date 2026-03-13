#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> dp(8,1e9);
    dp[0] = 0;
    for(int i=0; i<n; i++){
        int x;
        string s;
        cin>>x>>s;

        int mask = 0;


        for(char c:s){
            if(c=='A') mask = mask|1;
            if(c=='B') mask = mask|2;
            if(c=='C') mask = mask|4;
        }

        for(int m=0; m<8; m++){
            int next = m|mask;
            dp[next] = min(dp[next], dp[m]+x);
        }

    }
    cout<<dp[7]<<"\n";
}