#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

bool f(vector<vector<int>>& adj){
    queue<pair<int,int>> q;
    int n = adj.size();
    vector<int> vis(n,-1);
    q.push({1,1});
    vis[1]=1;
    int cnt =3;
    while(!q.empty()){
        int curr = q.front().first;
        int color = q.front().second;
        q.pop();
        for(auto it : adj[curr]){
            int col = color==1?2:1;
            if(vis[it]==-1){
                
                q.push({it,col});
                vis[it]=col;
            }else{
                if(vis[it]!=col){
                    return false;
                }
            }
        }
    }
    return true;
}


void solve()
{
    int n,m;
    cin>>n>>m;

    vector<int> deg(n+1,0);

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;

    }
    bool flag = false;
    int maxi = 0;
    for(int i=1; i<=n; i++){
        if(deg[i]==0)flag=true;
        maxi=max(maxi,deg[i]);
    }

    if(flag){
        cout<<"Brain Melt"<<"\n";
    }else if(maxi==n-1 && m==n-1){
        cout<<2<<"\n";
    }else{
        cout<<"Many"<<"\n";
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}