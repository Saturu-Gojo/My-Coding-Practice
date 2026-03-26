#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v(n+1),dis(n+1,-1);
        for(int i=1; i<=n; i++)cin>>v[i];

        vector<vector<int>> adj(n+1);
        for(int i=0; i<m; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        dis[1]=0;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int v : adj[curr]){
                if(dis[v]==-1){
                    dis[v]=dis[curr]+1;
                    q.push(v);

                }
            }
        }

        vector<int> maxi(k+1,0);
        for(int i=1; i<=n; i++){
            int p = v[i];
            maxi[p] = max(maxi[p],dis[i]);
        }

        for (int i = 1; i <= k; i++) {
        cout << maxi[i] << (i == k ? "" : " ");
    }
    cout << '\n';
    
    return 0;
}