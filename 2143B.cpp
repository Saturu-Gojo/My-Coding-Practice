#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> topo[n+1];
        vector<ll> indeg(n+1);
        for(int i=1; i<n; i++){
            ll u,v,x,y;
            cin>>u>>v>>x>>y;

            if(x>y){
                topo[u].push_back(v);
                indeg[v]++;
            }else{
                topo[v].push_back(u);
                indeg[u]++;
            }
            
        }
        queue<int> q;
        for(int i=1; i<=n; i++){
            if(indeg[i]==0){
                q.push(i);

            }
        }
        int val = n;
        vector<int> ans(n+1);
        while(!q.empty()){
            int curr = q.front();
            ans[curr]=val;
            val--;
            q.pop();
            auto it = topo[curr];
            for(auto x : it){
                indeg[x]--;
                if(indeg[x]==0)q.push(x);
            }
        }

        for(int i=1; i<=n; i++)cout<<ans[i]<<" ";

        cout<<'\n';

    }
}