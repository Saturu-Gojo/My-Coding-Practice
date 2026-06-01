#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// void solve() {
//     int n;
//     cin >> n;
//     vector<vector<char>> v(2,vector<char>(n));
//     for (int i = 0; i < 2; i++){
//         for(int j=0; j<n; j++){
//             cin>>v[i][j];
//         }
//     }
//     int op = 0;
//     vector<vector<int>> vis(2,vector<int>(n));
//     for(int i=0; i<n; i++){
//         char a = v[0][i];
//         if(!vis[0][i] && !vis[1][i] && v[0][i]==v[1][i]){
//             vis[0][i]=1;
//             vis[1][i]=1;
//         }
//     }
//     for(int i=0; i<2; i++){
//         for(int j=0; j<n; j++){
//             if(j+1<n && !vis[i][j] && !vis[i][j+1] && v[i][j]==v[i][j+1]){
//                 vis[i][j]=1;
//                 vis[i][j+1]=1;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(!vis[0][i])op++;
//     }
//     for(int i=0; i<n; i++){
//         if(!vis[1][i])op++;
//     }

//     cout<<op/2<<'\n';
    
// }

void next(){
    int n;
    cin>>n;
    vector<string> d(2);
    cin>>d[0]>>d[1];
    vector<int> dp(n+1,INT_MAX);
    //dp[i] => minimum no. of operation required to paint in first i col
    dp[0]=0; //initial state
    for(int i=0; i<n; i++){
        dp[i+1] = min(dp[i+1], dp[i] + (d[0][i]!=d[1][i]));

        if(i+1<n){
            dp[i+2] = min(dp[i+2], dp[i] + (d[0][i]!=d[0][i+1]) + (d[1][i]!=d[1][i+1]));
        }
    }
    cout<<dp[n]<<'\n';
}

int main() {
    // Fast I/O to prevent Time Limit Exceeded on large test cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        // solve();
        next();
    }
    return 0;
}