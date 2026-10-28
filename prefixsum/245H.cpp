#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool is_true(int i, int j, string &s, vector<vector<ll>> &dp){
    if(i>=j)return true;
    if(dp[i][j]!=-1)return dp[i][j];

    if(s[i]==s[j])return dp[i][j] = is_true(i+1,j-1,s,dp);
    else return dp[i][j] = false;
}




void solve(){
    
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n = s.size();

    vector<vector<bool>> pal(n,vector<bool>(n,false));
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    
    for(int len=1; len<=n; len++){
        for(int i=0; i+len<=n; i++){
            int j=i+len-1;
          
            if(len==1){
                pal[i][j]=1;
            }else if(s[i]==s[j] && (len==2 || pal[i+1][j-1]==1)){
                pal[i][j]=1;
            }else{
                pal[i][j]=0;
            }
            dp[i][j]=pal[i][j];
            if(i+1<=j)dp[i][j]+=dp[i+1][j];
            if(j-1>=i)dp[i][j]+=dp[i][j-1];
            if(i+1<=j-1)dp[i][j]-=dp[i+1][j-1];
        }
    }

    for(int i=0; i<m; i++){
        int p,q;
        cin>>p>>q;
        int len = q-p+1;
        int ans = dp[p-1][q-1];
        // if(p-1>0 && q-1>0)ans -= dp2[p-2][q-2];
        cout<<ans<<"\n";
    }
    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
  
    while(t--)solve();

}