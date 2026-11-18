#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void dfs(int src, vector<vector<int>> &adj,vector<int> &vis){
    vis[src]=1;
    for(int x : adj[src]){
        if(vis[x]==0){
            dfs(x,adj,vis);
        }
        
    }
}


void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n+1,0);
    vector<pair<int,int>> ans;
  
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
            dfs(i,adj,vis);
            if(i!=1){
                ans.push_back({1,i});
            }
            
        }
    }


    cout<<ans.size()<<"\n";
    for(int i=0; i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<'\n';
    }


    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    // for(int i=1; i<=1e5; i++){
    //     for(int j=i; j<=1e5; j+=i){
    //         fac[j].push_back(i);
    //     }
    // }

   

	int t=1;
    // cin>>t;


  
    while(t--)solve();

}