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

void bfs(int src, vector<int> &vis,vector<vector<int>> &adj,bool &flag){
    queue<pair<int,int>> q;
    q.push({src,1});
    vis[src]=1;
    while(!q.empty()){
        int node = q.front().first;
        int color = q.front().second;
        q.pop();
        for(int x:adj[node]){
            int c = color==1?2:1;
            if(vis[x]==0){
                q.push({x,c});
                vis[x]=c;
            }else if(vis[x]!=c){
                flag=true;
                cout<<"IMPOSSIBLE"<<'\n';
                return;
            }
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
    bool flag=false;
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
            bfs(i,vis,adj,flag);
        }
        if(flag)break;
    }
    if(!flag) {
        for(int i=1; i<=n; i++){
            cout<<vis[i]<<" ";
        }
    }
    
    cout<<"\n";


    
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